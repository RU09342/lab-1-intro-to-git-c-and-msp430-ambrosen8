#include <msp430.h> 
#include "math.h"
#include "uart.h"

/**
 * main.c
 */

const char String[] = {"Hello\r\n"};
unsigned int i;
//int number;
char *numberstring[6];
char dummy;
int number = 32;

void UART_Init();
void Clock_Init();
void GPIO_Init();


int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	Clock_Init();
	GPIO_Init();
	UART_Init();


	  __bis_SR_register(LPM0_bits + GIE);       // Enter LPM0, interrupts enabled
 	while (1)
	{}
}


void UART_Init()
{
    UCA0CTL1 |= UCSSEL_2;                     // SMCLK
    UCA0BR0 = 104;                            // 1MHz 9600
    UCA0BR1 = 0;                              // 1MHz 9600
    UCA0MCTL = UCBRS0;                        // Modulation UCBRSx = 1
    UCA0CTL1 &= ~UCSWRST;                     // **Initialize USCI state machine**
    IE2 |= UCA0RXIE;                          // Enable USCI_A0 RX interrupt
}

void Clock_Init()
{
    if (CALBC1_1MHZ==0xFF)                    // If calibration constant erased
     {
       while(1);                               // do not load, trap CPU!!
     }
     DCOCTL = 0;                               // Select lowest DCOx and MODx settings
     BCSCTL1 = CALBC1_1MHZ;                    // Set DCO
     DCOCTL = CALDCO_1MHZ;
}

void GPIO_Init()
{

    P1SEL = BIT1 + BIT2 ;                     // P1.1 = RXD, P1.2=TXD
    P1SEL2 = BIT1 + BIT2 ;                    // P1.1 = RXD, P1.2=TXD
}

/*
#pragma vector=USCIAB0TX_VECTOR
__interrupt void USCI0TX_ISR(void)
{
    UCA0TXBUF = String[i++];
    if (i == sizeof String - 1)
        UC0IE &= ~UCA0TXIE;
}
*/

#pragma vector=USCIAB0RX_VECTOR
__interrupt void USCI0RX_ISR(void)
{
    /*
    i = 0;
    UC0IE |= UCA0TXIE;
    UCA0TXBUF = String[i++];
    */
    char Result[6] = "      ";
    dummy = UCA0RXBUF;
    itoa(number, Result, 10);
    uart_puts(Result);
    //uart_puts(Result);
}
