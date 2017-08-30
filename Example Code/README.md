# Example Code for Launchpads
For each of the launchpads required for this class, we want to ensure that these processors not only work but you can utilize UART on your laptop. To be able to communicate using UART, you will need to install a program such as [PUTTY](http://www.putty.org/) or [RealTerm](https://sourceforge.net/projects/realterm/), as well as a USB-UART cable. We can provide cables during lab for a few of you; however it would be in your best interest to purchase your own.

## Importing your code into CCS
Since the code provided in this folder are full CCS Projects, we need to import them as such. To do this, you hit "File->Import->CodeComposerStudio->CCS Projects" and then Next. You can then browse for your project and hit "Finish".

## Running the Code
Choose the processor board you wish to target and open the project. All you have to do is hit the Build and Debug button in the toolbar, and assuming no errors, you can then hit the Run button and your code will run. 

### Fair Warning about UART
For some of these processors, the jumpers on the board may need to be changed in order to utilize the hardware UART. Look at the comments for each of the files to see what needs to be done.

## Communication over UART
For each processor, there is going to be a specific *BAUD RATE* which you will need to take note of. Some will be 9600 and others might be 115200. Do not worry at this point about what this means. All you need to know is that the reciever and the transmitter need to be at the same Baud Rate. Also note what pins are used on each platform and connect your UART cable to the designated pins.

**DO NOT** Connect the red wire on your UART cable to your board. This is a 5V line and can potentially damage boards designed to work at 3.3V.

You are going to need two values for this to work, the BAUD RATE and the COM Port. BAUD RATE can be determined by looking at the commenting in the example code. The COM Port can be determined by opening the "Device Manage" and looking under the "Ports(COM & LPT)". The COM Port you need to look at is the one with "Prolific..." on it. That number that is next to that line is the COM Port your computer will use to talk to your device.

### PUTTY
If you are using PUTTY, fire it up and click on the "Serial" option. Once you have the Baud Rate and the COM Port, you can enter them and hit "Open". You will be greeted with an empty screen, and unless you have your processor hooked up correctly, you are going to get a blank screen that when you type in it, nothing will happen. 

### RealTerm
If you are going to use RealTerm, you will need to open the program and you are going to be given a ton of options that will most likely not make sense. Click on the "Port" tab and enter the COM Port in the "Port Field". Then from the dropdown menu, select the proper baud rate for the example code you are running. For right now, do not change and other settings. 

To send text or characters on the UART line, click on the "Send" tab. From here, you can enter the text you wish to send in the textbox, and once ready, you can click "Send Numbers" or "Send ASCII" to transmit the characters. 

## Loopback test
If you want to make sure that you have your UART Cable driver and ensure that nothing is electrically wrong with the cable, you can perform a loopback test. This is done by tying together the RX and TX pins using a wire, jumper, etc. If you have your PUTTY or RealTerm session running, if you transmit any characters, you should see them pop up on the screen. This is actually your PC sending UART signals over the TX line and you are seeing what the computer has read from the RX line which should be the same.