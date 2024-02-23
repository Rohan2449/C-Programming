/****************************************************/
/* Name : Rohan Gharibgard                          */
/* Student ID : 1288671                             */
/* Homework 1 Program Set 1                         */
/* Date : 8/30/23                                   */
/* Counts how much money the user has               */
/****************************************************/

#include <stdio.h>

int main()
{
// Declaration
int numQuarters, numNickels, numDimes, numPennies;
double totalBalance;
char first, middle, last;

// Input/Data
printf("Enter your initials, first, middle and last: ");
scanf("%c %c %c",&first, &middle, &last);
printf("Hello %c.%c.%c., lets see what your coins are worth.\n", first, middle, last);
printf("Enter number of quarters: ");
scanf("%d", &numQuarters);
printf("Enter number of dimes: ");
scanf("%d", &numDimes);
printf("Enter number of nickels: ");
scanf("%d", &numNickels);
printf("Enter number of pennies: ");
scanf("%d", &numPennies);

// Calculations
totalBalance = numQuarters * 0.25 + numDimes * 0.1 + numNickels * 0.05 + numPennies * 0.01;

// Output
printf("Your coins are worth %i dollars and %i cents.\n", (int)totalBalance, (int)(totalBalance * 100) % 100);

return 0;

}


// Output

// Test Run 1
// Enter your initials, first, middle and last: RAG
// Hello R.A.G., lets see what your coins are worth.
// Enter number of quarters: 3
// Enter number of dimes: 2
// Enter number of nickels: 1
// Enter number of pennies: 1
// Your coins are worth 1 dollars and 1 cents.                                                                                  


// Test Run 2
// Enter your initials, first, middle and last: JFK
// Hello J.F.K., lets see what your coins are worth.
// Enter number of quarters: 7
// Enter number of dimes: 0
// Enter number of nickels: 2
// Enter number of pennies: 9
// Your coins are worth 1 dollars and 94 cents.


// Test Run 3
// Enter your initials, first, middle and last: PDF
// Hello P.D.F., lets see what your coins are worth.
// Enter number of quarters: 0
// Enter number of dimes: 32
// Enter number of nickels: 10
// Enter number of pennies: 230
// Your coins are worth 6 dollars and 0 cents.

// Test Run 4
// Enter your initials, first, middle and last: CAL
// Hello C.A.L., lets see what your coins are worth.
// Enter number of quarters: 1
// Enter number of dimes: 1
// Enter number of nickels: 1
// Enter number of pennies: 1
// Your coins are worth 0 dollars and 41 cents.

// Test Run 5
// Enter your initials, first, middle and last: AJW
// Hello A.J.W., lets see what your coins are worth.
// Enter number of quarters: -3
// Enter number of dimes: -10
// Enter number of nickels: 200
// Enter number of pennies: 0
// Your coins are worth 8 dollars and 25 cents.
