//Calculator 
#include <stdio.h>
#include "math.h"

int math(int num1, int num2, char Operator)
{
int result = 0;
switch (Operator)		//Beginning of switch-case statement
{
case '+':				// + operator
result = num1 + num2;
case '-':				// - operator
result = num1 - num2;
case '*':				// * operator
result = num1 * num2;
case '/':				// / operator
result = num1 / num2;
case '%':				// % operator
result = num1 % num2;
default:				// Sets result to 0
result = 0;
}
return result;			
}
