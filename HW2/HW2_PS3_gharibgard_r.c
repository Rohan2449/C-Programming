/****************************************************/
/* Name : Rohan Gharibgard                          */
/* Student ID : 1288671                             */
/* Homework 2 Program Set 3                         */
/* Date : 9/28/23                                   */
/* calculates raises based on salary                */
/****************************************************/


#include <stdio.h>

int main()
{
// Declerations
float salary, rate, raise, newSal;
float totalSal = 0, totalRaise = 0, totalNewSal = 0;
int numSalaries;
// Input
printf("How many salaries do you want to enter? ");
scanf("%d", &numSalaries);
printf("\n                      Salary         Rate    Raise     New Salary\n");
printf("-----------------------------------------------------------------\n");

// for-loop
for(;numSalaries > 0; numSalaries--){
    //Input
    printf("Salary : ");
    scanf("%f", &salary);

    // if-statements
    if(salary < 30000){
        rate = 0.07;
    }
    else if(salary <= 40000){
        rate = 0.055;
    }
    else if(salary > 40000){
        rate = 0.04;
    }

    //calculations
    raise = salary * rate;
    newSal = salary + raise;
    totalSal += salary;
    totalRaise += raise;
    totalNewSal += newSal;

    //BODY
    printf("                    %10.2f %10.2f %10.2f %10.2f\n",salary,rate*100,raise,newSal);
}

// total-output
printf("-----------------------------------------------------------------\n");
printf("Total               %10.2f            %10.2f %10.2f\n",totalSal,totalRaise,totalNewSal);

return 0;
}

//Test Runs

// Test Run 1
// How many salaries do you want to enter? 4

//                       Salary         Rate    Raise     New Salary
// -----------------------------------------------------------------
// Salary : 25000
//                       25000.00       7.00    1750.00   26750.00
// Salary : 30000
//                       30000.00       5.50    1650.00   31650.00
// Salary : 35000
//                       35000.00       5.50    1925.00   36925.00
// Salary : 40000
//                       40000.00       5.50    2200.00   42200.00
// -----------------------------------------------------------------
// Total                130000.00               7525.00  137525.00


// Test Run 2
// How many salaries do you want to enter? 0

//                       Salary         Rate    Raise     New Salary
// -----------------------------------------------------------------
// -----------------------------------------------------------------
// Total                     0.00                  0.00       0.00


// Test Run 3
// How many salaries do you want to enter? 2

//                       Salary         Rate    Raise     New Salary
// -----------------------------------------------------------------
// Salary : 10000
//                       10000.00       7.00     700.00   10700.00
// Salary : 60000
//                       60000.00       4.00    2400.00   62400.00
// -----------------------------------------------------------------
// Total                 70000.00               3100.00   73100.00