/****************************************************/
/* Name : Rohan Gharibgard                          */
/* Student ID : 1288671                             */
/* Homework 1 Program Set 2                         */
/* Date : 8/30/23                                   */
/* Calculates portfolio info of user's stocks       */
/****************************************************/


#include <stdio.h>

int main()
{

//Declaration
char stockName[20];
int numShares;
float buyPrice, currPrice, yearlyFees;
float initialCost, currCost, profit;

printf("*********************************\n");
printf("             Stock 1             \n");
printf("*********************************\n");

// Input
printf("Enter stock name ");
gets(stockName);
printf("Enter number of shares ");
scanf("%d", &numShares);
printf("Enter the buy price, current price, fees ");
scanf("%f %f %f", &buyPrice, &currPrice, &yearlyFees);
getchar();

// Calculations
initialCost = buyPrice * numShares;
currCost = currPrice * numShares;
profit = currCost - initialCost - yearlyFees;

//Output
printf("The Stock name is    : %s\n", stockName);
printf("The number of shares :  %10.0i\n", numShares);
printf("The buy price is     : $%10.2f\n", buyPrice);
printf("The current price is : $%10.2f\n", currPrice);
printf("The fees are         : $%10.2f\n\n", yearlyFees);
printf("The initial cost is  : $%10.2f\n", initialCost);
printf("The current cost is  : $%10.2f\n", currCost);
printf("The profit is        : $%10.2f\n\n", profit);


printf("*********************************\n");
printf("             Stock 2             \n");
printf("*********************************\n");

// Input
printf("Enter stock name ");
gets(stockName);
printf("Enter number of shares ");
scanf("%d", &numShares);
printf("Enter the buy price, current price, fees ");
scanf("%f %f %f", &buyPrice, &currPrice, &yearlyFees);
getchar();

// Calculations
initialCost = buyPrice * numShares;
currCost = currPrice * numShares;
profit = currCost - initialCost - yearlyFees;

//Output
printf("The Stock name is    : %s\n", stockName);
printf("The number of shares :  %10.0i\n", numShares);
printf("The buy price is     : $%10.2f\n", buyPrice);
printf("The current price is : $%10.2f\n", currPrice);
printf("The fees are         : $%10.2f\n\n", yearlyFees);
printf("The initial cost is  : $%10.2f\n", initialCost);
printf("The current cost is  : $%10.2f\n", currCost);
printf("The profit is        : $%10.2f\n\n", profit);


printf("*********************************\n");
printf("             Stock 3             \n");
printf("*********************************\n");

// Input
printf("Enter stock name ");
gets(stockName);
printf("Enter number of shares ");
scanf("%d", &numShares);
printf("Enter the buy price, current price, fees ");
scanf("%f %f %f", &buyPrice, &currPrice, &yearlyFees);
getchar();

// Calculations
initialCost = buyPrice * numShares;
currCost = currPrice * numShares;
profit = currCost - initialCost - yearlyFees;

//Output
printf("The Stock name is    : %s\n", stockName);
printf("The number of shares :  %10.0i\n", numShares);
printf("The buy price is     : $%10.2f\n", buyPrice);
printf("The current price is : $%10.2f\n", currPrice);
printf("The fees are         : $%10.2f\n\n", yearlyFees);
printf("The initial cost is  : $%10.2f\n", initialCost);
printf("The current cost is  : $%10.2f\n", currCost);
printf("The profit is        : $%10.2f\n\n", profit);


printf("*********************************\n");
printf("             Stock 4             \n");
printf("*********************************\n");

// Input
printf("Enter stock name ");
gets(stockName);
printf("Enter number of shares ");
scanf("%d", &numShares);
printf("Enter the buy price, current price, fees ");
scanf("%f %f %f", &buyPrice, &currPrice, &yearlyFees);
getchar();

// Calculations
initialCost = buyPrice * numShares;
currCost = currPrice * numShares;
profit = currCost - initialCost - yearlyFees;

//Output
printf("The Stock name is    : %s\n", stockName);
printf("The number of shares :  %10.0i\n", numShares);
printf("The buy price is     : $%10.2f\n", buyPrice);
printf("The current price is : $%10.2f\n", currPrice);
printf("The fees are         : $%10.2f\n\n", yearlyFees);
printf("The initial cost is  : $%10.2f\n", initialCost);
printf("The current cost is  : $%10.2f\n", currCost);
printf("The profit is        : $%10.2f\n\n", profit);


printf("*********************************\n");
printf("             Stock 5             \n");
printf("*********************************\n");

// Input
printf("Enter stock name ");
gets(stockName);
printf("Enter number of shares ");
scanf("%d", &numShares);
printf("Enter the buy price, current price, fees ");
scanf("%f %f %f", &buyPrice, &currPrice, &yearlyFees);
getchar();

// Calculations
initialCost = buyPrice * numShares;
currCost = currPrice * numShares;
profit = currCost - initialCost - yearlyFees;

//Output
printf("The Stock name is    : %s\n", stockName);
printf("The number of shares :  %10.0i\n", numShares);
printf("The buy price is     : $%10.2f\n", buyPrice);
printf("The current price is : $%10.2f\n", currPrice);
printf("The fees are         : $%10.2f\n\n", yearlyFees);
printf("The initial cost is  : $%10.2f\n", initialCost);
printf("The current cost is  : $%10.2f\n", currCost);
printf("The profit is        : $%10.2f\n", profit);


return 0;
}

// Output

// *********************************
//              Stock 1             
// *********************************
// Enter stock name IBM CORP
// Enter number of shares 155
// Enter the buy price, current price, fees 15.33 13.33 5.00
// The Stock name is    : IBM CORP
// The number of shares :         155
// The buy price is     : $     15.33
// The current price is : $     13.33
// The fees are         : $      5.00

// The initial cost is  : $   2376.15
// The current cost is  : $   2066.15
// The profit is        : $   -315.00

// *********************************
//              Stock 2             
// *********************************
// Enter stock name ORACLE SYS
// Enter number of shares 375
// Enter the buy price, current price, fees 11.77 12.25 3.50
// The Stock name is    : ORACLE SYS
// The number of shares :         375
// The buy price is     : $     11.77
// The current price is : $     12.25
// The fees are         : $      3.50

// The initial cost is  : $   4413.75
// The current cost is  : $   4593.75
// The profit is        : $    176.50

// *********************************
//              Stock 3             
// *********************************
// Enter stock name SUN MICRO
// Enter number of shares 350
// Enter the buy price, current price, fees 27.55 35.75 12.25
// The Stock name is    : SUN MICRO
// The number of shares :         350
// The buy price is     : $     27.55
// The current price is : $     35.75
// The fees are         : $     12.25

// The initial cost is  : $   9642.50
// The current cost is  : $  12512.50
// The profit is        : $   2857.75

// *********************************
//              Stock 4             
// *********************************
// Enter stock name LINKSYS INC
// Enter number of shares 85
// Enter the buy price, current price, fees 25.35 23.34 6.00
// The Stock name is    : LINKSYS INC
// The number of shares :          85
// The buy price is     : $     25.35
// The current price is : $     23.34
// The fees are         : $      6.00

// The initial cost is  : $   2154.75
// The current cost is  : $   1983.90
// The profit is        : $   -176.85

// *********************************
//              Stock 5             
// *********************************
// Enter stock name CISCO INC
// Enter number of shares 50
// Enter the buy price, current price, fees 45.36 50.86 1.50
// The Stock name is    : CISCO INC
// The number of shares :          50
// The buy price is     : $     45.36
// The current price is : $     50.86
// The fees are         : $      1.50

// The initial cost is  : $   2268.00
// The current cost is  : $   2543.00
// The profit is        : $    273.50
