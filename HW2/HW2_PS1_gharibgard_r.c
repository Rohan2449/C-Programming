/****************************************************/
/* Name : Rohan Gharibgard                          */
/* Student ID : 1288671                             */
/* Homework 2 Program Set 1                         */
/* Date : 9/20/23                                   */
/* calculates how much taxes the user owes          */
/****************************************************/

#include <stdio.h>

int main()
{
    //declaration
    int filing_status;
    float TI = 0, tax = 0;

    //input and switch-case
    printf("************Menu****************\n");
    printf("1) Single\n");
    printf("2) Married Filing Jointly\n");
    printf("3) Married Filing Separately\n");
    printf("4) Head of Household\n");
    printf("5) Exit Program\n\n");
    printf("********************************\n\n");
    printf("Enter Status : ");
    scanf("%d", &filing_status);

    switch(filing_status)
    {
        case 1: case 2: case 3: case 4:
            printf("Enter your taxable TI: $");
            scanf("%f", &TI);
            break;
        case 5:
            printf("\nExit program...\n");
            return 0;
        default:
            printf("\nYou entered a wrong status. Program Exit . . .\n");
            return 0;

    }

    // If-Statements and Calculations
    if(filing_status == 1)
    { /* Single */
        if(TI > 0 && TI <= 24000){
            tax = TI * .15;
        }
        else if(TI > 24000 && TI <= 58000){
            tax = 3600 + (TI - 24000) * .28;
        }
        else if(TI > 58000 && TI <= 121300 ){
            tax = 13162 + (TI - 58000) * .31;
        }
        else if(TI > 121300 && TI <= 263750){
            tax = 32738.50 +  (TI - 121300) * .36;
        }
        else if(TI > 263750){
            tax = 84020.50 + (TI - 263750) * .396;
        }

    }
    else if(filing_status == 2)
    { /* Married Filing Jointly */
        if(0 < TI && TI <= 40100){
            tax = TI * .15;
        }
        else if(40100 < TI && TI <= 96900){
            tax = 6015 + (TI - 40100) * .28;
        }
        else if(96900 < TI && TI <= 147700){
            tax = 21919 + (TI - 96900) * .31;
        }
        else if(147700 < TI && TI <= 263750){
            tax = 37667 + .36 * (TI - 147700);
        }
        else if(263750 < TI){
            tax = 79445 + .396 * (TI - 263750);
        }

    }
    else if(filing_status == 3)
    { /* Married Filing Separately */
        if(0 < TI && TI <= 20050){
            tax = TI * .15;
        }
        else if(20050 < TI && TI <= 48450){
            tax = 3007.5 + (TI - 20050) * .28;
        }
        else if(48450 < TI && TI <= 147700){
            tax = 10959.5 + (TI - 48450) * .31;
        }
        else if(73850 < TI && TI <= 131875){
            tax = 18833.5 + .36 * (TI - 73.850);
        }
        else if(131875 < TI){
            tax = 39722.5 + .396 * (TI - 131875);
        }

    }
    else if(filing_status == 4)
    { /* Head of Household */
        if(0 < TI && TI <= 32150){
            tax = TI * .15;
        }
        else if(32150 < TI && TI <= 83050){
            tax = 4822.5 + (TI - 32150) * .28;
        }
        else if(83050 < TI && TI <= 134500){
            tax = 19074.5 + (TI - 83050) * .31;

        }
        else if(134500 < TI && TI <= 263750){
            tax = 35074 + .36 * (TI - 134500);
        }
        else if(263750 < TI){
            tax = 81554 + .396 * (TI - 263750);
        }

    }

    // Output
    printf("\nThe Taxes owed are: $%.2f\n", tax);

    return 0;
}


//File Outputs


//Test Run 1
// ************Menu****************
// 1) Single
// 2) Married Filing Jointly
// 3) Married Filing Separately
// 4) Head of Household
// 5) Exit Program
//
// ********************************
//
// Enter Status : 1
// Enter your taxable TI: $50000
// The Taxes owed are: $10880.00


// Test Run 2
// ************Menu****************
// 1) Single
// 2) Married Filing Jointly
// 3) Married Filing Separately
// 4) Head of Household
// 5) Exit Program
//
// ********************************
//
// Enter Status : 5
//
// Exit program...


// Test Run 3
// ************Menu****************
// 1) Single
// 2) Married Filing Jointly
// 3) Married Filing Separately
// 4) Head of Household
// 5) Exit Program
//
// ********************************
//
// Enter Status : a
//
// You entered a wrong status. Program Exit . . .


//Test Run 4
// ************Menu****************
// 1) Single
// 2) Married Filing Jointly
// 3) Married Filing Separately
// 4) Head of Household
// 5) Exit Program
//
// ********************************
//
// Enter Status : 7
//
// You entered a wrong status. Program Exit . . .


// Test Run 5
// ************Menu****************
// 1) Single
// 2) Married Filing Jointly
// 3) Married Filing Separately
// 4) Head of Household
// 5) Exit Program
//
// ********************************
//
// Enter Status : 2
// Enter your taxable TI: $23400
//
// The Taxes owed are: $3510.00


// Test Run 6
// ************Menu****************
// 1) Single
// 2) Married Filing Jointly
// 3) Married Filing Separately
// 4) Head of Household
// 5) Exit Program
//
// ********************************
//
// Enter Status : 3
// Enter your taxable TI: $263750
//
// The Taxes owed are: $91945.00


// Test Run 7
// ************Menu****************
// 1) Single
// 2) Married Filing Jointly
// 3) Married Filing Separately
// 4) Head of Household
// 5) Exit Program
//
// ********************************
//
// Enter Status : 4
// Enter your taxable TI: $200500
//
// The Taxes owed are: $58834.00


// Test Run 8
// ************Menu****************
// 1) Single
// 2) Married Filing Jointly
// 3) Married Filing Separately
// 4) Head of Household
// 5) Exit Program
//
// ********************************
//
// Enter Status : 2
// Enter your taxable TI: $96900
//
// The Taxes owed are: $21919.00