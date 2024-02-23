/***************************************************************************/
/* Name : Rohan Gharibgard                                                 */
/* Student ID : 1288671                                                    */
/* Homework 3 Program Set 1                                                */
/* Date : 10/25/23                                                         */
/* This program calculates salary raises for employees.                    */
/*                                                                         */
/***************************************************************************/

#include <stdio.h>

//Function prototypes
double load(char *name);
double calcRate(double salary);
double calcRaise(double rate, double salary);
double calcNewSalary(double raise, double salary);
void calcTotalSalaries(double *totalSalary, double *totalRaise, double*totalNewSalary, double salary, double raise, double newSalary);
void salaryOutput(char *name, double salary, double rate, double raise, double newSalary);
void totalOutput(double totalSalary, double totalRaise, double totalNewSalary);


int main()
{
    //Declaration
    int numEmployees;
    char name[20];
    double salary, rate, raise;
    double newSalary;
    double totalSalary, totalRaise, totalNewSalary;
    totalSalary = totalRaise = totalNewSalary = 0;

    //Input
    printf("How many employees : ");
    scanf("%d", &numEmployees);

    //for-loop and function calls
    for(int i = 0; i < numEmployees; i++){
        //Input
        salary = load(name);

        //Calculations
        rate = calcRate(salary);
        raise = calcRaise(rate, salary);
        newSalary = calcNewSalary(raise, salary);
        calcTotalSalaries(&totalSalary, &totalRaise, &totalNewSalary, salary, raise, newSalary);

        //Output
        salaryOutput(name, salary, rate, raise, newSalary);

    }

    //Total Output
    totalOutput(totalSalary, totalRaise, totalNewSalary);

    return 0;
}


//load() let's user input the employee's name and current salary
//and return the name and salary to main()
double load(char *name)
{
    //declaration
    double salary;

    //input
	printf("\nEnter the Employee's name: ");
    getchar();
    gets(name);
    printf("Enter salary : ");
    scanf("%lf", &salary);

    return salary;
}


//calcRate() finds the rate for the salary and returns rate to main()
double calcRate(double salary)
{
    //declaration
    double rate;

    //if statements
	if(0 < salary && salary < 30000){
        rate = 7.0;
    }
    else if(30000<= salary && salary <= 40000){
        rate = 5.5;
    }
    else if(salary > 40000){
        rate = 4.0;
    }

	return rate;
}


//calcRaise() calculates the raise and returns raise
double calcRaise(double rate, double salary)
 {
    //calculations
    double raise = rate * 0.01 * salary;

	return raise; 	
 }


//calcNewSalary() calculates the new salary and returns the new salary
double calcNewSalary(double raise, double salary)
{
    //calculation
    double newSalary = raise + salary;

	return newSalary;
}


//calcTotalSalaries() calculates the total for the salary, raise, and new salary 
//and pass the toal salary, total raise, total new salary back to calling function
void calcTotalSalaries(double *totalSalary, double *totalRaise, double*totalNewSalary, double salary, double raise, double newSalary)
{
    //calculations
    *totalSalary += salary;
    *totalRaise += raise;
    *totalNewSalary += newSalary;	
}


//salaryOutput() prints the name, salary, rate, raise, and new salary
void salaryOutput(char *name, double salary, double rate, double raise, double newSalary)
{   
    //output
    printf("\nEmployee's Name   :%16s\n", name);
    printf("Salary            :%16.2lf\n", salary);
    printf("Rate              :%15.1lf%%\n",rate);
    printf("Raise             :%16.2lf\n", raise);
    printf("New salary        :%16.2lf\n\n", newSalary);
}


//totalOutput() prints the total salary, total raise, and total new salary
void totalOutput(double totalSalary, double totalRaise, double totalNewSalary)
{
    //output
    printf("Total salary      :%16.2lf\n", totalSalary);
    printf("Total Raise       :%16.2lf\n", totalRaise);
    printf("Total New Salary  :%16.2lf\n", totalNewSalary);
}

/*
Test Run 1

How many employees : 6

Enter the Employee's name: Daisy Yellow
Enter salary : 25000.00

Employee's Name   :    Daisy Yellow
Salary            :        25000.00
Rate              :            7.0%
Raise             :         1750.00
New salary        :        26750.00


Enter the Employee's name: Rose Red
Enter salary : 30000.00

Employee's Name   :        Rose Red
Salary            :        30000.00
Rate              :            5.5%
Raise             :         1650.00
New salary        :        31650.00


Enter the Employee's name: Periwinkle Pink
Enter salary : 35000.00

Employee's Name   : Periwinkle Pink
Salary            :        35000.00
Rate              :            5.5%
Raise             :         1925.00
New salary        :        36925.00


Enter the Employee's name: Marigold Orange
Enter salary : 40000

Employee's Name   : Marigold Orange
Salary            :        40000.00
Rate              :            5.5%
Raise             :         2200.00
New salary        :        42200.00


Enter the Employee's name: Iris Blue
Enter salary : 40001.00

Employee's Name   :       Iris Blue
Salary            :        40001.00
Rate              :            4.0%
Raise             :         1600.04
New salary        :        41601.04


Enter the Employee's name: Lilacs Purple
Enter salary : 45000.00

Employee's Name   :   Lilacs Purple
Salary            :        45000.00
Rate              :            4.0%
Raise             :         1800.00
New salary        :        46800.00

Total salary      :       215001.00
Total Raise       :        10925.04
Total New Salary  :       225926.04

*/