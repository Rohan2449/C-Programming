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

// Input
printf("                      Salary         Rate    Raise     New Salary\n");
printf("-----------------------------------------------------------------\n");
printf("Salary : ");
scanf("%f", &salary);

// While-loop
while(salary >= 0){
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
    printf("Salary : ");
    scanf("%f", &salary);
}

// total-output
printf("-----------------------------------------------------------------\n");
printf("Total               %10.2f            %10.2f %10.2f\n",totalSal,totalRaise,totalNewSal);

return 0;
}

//Test Runs

// Test Run 1
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
// Salary : -1
// -----------------------------------------------------------------
// Total                130000.00               7525.00  137525.00


// Test Run 2
//                       Salary         Rate    Raise     New Salary
// -----------------------------------------------------------------
// Salary : -1
// -----------------------------------------------------------------
// Total                     0.00                  0.00       0.00


// Test Run 3
//                       Salary         Rate    Raise     New Salary
// -----------------------------------------------------------------
// Salary : 26300
//                       26300.00       7.00    1841.00   28141.00
// Salary : 10000
//                       10000.00       7.00     700.00   10700.00
// Salary : 42000
//                       42000.00       4.00    1680.00   43680.00
// Salary : -999
// -----------------------------------------------------------------
// Total                 78300.00               4221.00   82521.00


// Test Run 4
//                       Salary         Rate    Raise     New Salary
// -----------------------------------------------------------------
// Salary : 12000
//                       12000.00       7.00     840.00   12840.00
// Salary : 300
//                         300.00       7.00      21.00     321.00
// Salary : 0
//                           0.00       7.00       0.00       0.00
// Salary : 300000.50
//                      300000.50       4.00   12000.02  312000.53
// Salary : -10
// -----------------------------------------------------------------
// Total                312300.50              12861.02  325161.53


// Test Run 5
//                       Salary         Rate    Raise     New Salary
// -----------------------------------------------------------------
// Salary : 8000
//                        8000.00       7.00     560.00    8560.00
// Salary : 2000
//                        2000.00       7.00     140.00    2140.00
// Salary : 30000
//                       30000.00       5.50    1650.00   31650.00
// Salary : 32000
//                       32000.00       5.50    1760.00   33760.00
// Salary : 0
//                           0.00       7.00       0.00       0.00
// Salary : -1
// -----------------------------------------------------------------
// Total                 72000.00               4110.00   76110.00