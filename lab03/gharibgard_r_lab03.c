/****************************************************/
/* Lab 3 Question 1                                 */
/* Name : Rohan Gharibgard                          */
/* Student ID : 1288671                             */
/* Date : 11/8/23                                   */
/* prints number of birds in Texas and California   */
/****************************************************/

#include <stdio.h>

//function prototypes
void texas();
void California();

int main(){

    //Output
    texas();
    California();

    return 0;
}


//texas - prints the number of birds Texas has
void texas(){
    int birds = 5000;
    printf("Texas has %d birds\n", birds);

}


//California - prints the number of birds Texas has
void California(){
    int birds = 8000;
    printf("California has %d birds\n", birds);
    
}

/*
Test Run 1

Texas has 5000 birds
California has 8000 birds
*/



/****************************************************/
/* Lab 3 Question 2                                 */
/* Name : Rohan Gharibgard                          */
/* Student ID : 1288671                             */
/* Date : 11/8/23                                   */
/* calculates and outputs the simple interest given */
/* the principal, rate, and period                  */
/****************************************************/

#include <stdio.h>

//function prototypes
double show_interest(double principal, double rate, int period);


int main(){
    //Decleration
    double principal, rate, interest;
    int period;

    //Input
    printf("Please input the principal amount, rate and period(in years): ");
    scanf("%lf %lf %d", &principal, &rate, &period);

    //function call
    interest = show_interest(principal, rate, period);

    //output
    printf("The simple interest will be $%.2lf\n", interest);

    return 0;

}


//show_interest - calculates the interest and returns interest to function call
double show_interest(double principal, double rate, int period){

    //calculate interest
    double interest = principal * rate * period;

    return interest;
}

/*
// Test Run 1
Please input the principal amount, rate and period(in years): 10000 .1 1
The simple interest will be $1000.00

// Test Run 2
Please input the principal amount, rate and period(in years): 20000 .05 4
The simple interest will be $4000.00

// Test Run 3
Please input the principal amount, rate and period(in years): 35000.42 .055 20
The simple interest will be $38500.46

*/





/****************************************************/
/* Lab 3 Question 3                                 */
/* Name : Rohan Gharibgard                          */
/* Student ID : 1288671                             */
/* Date : 11/8/23                                   */
/* Finds the area of a triangle using functions     */
/****************************************************/

#include <stdio.h>

//Function prototypes
void getData(double *len, double *height);
double trigArea(double len, double height);
void displayData(double area, double len, double height);

int main(){
    //declaration
    double area, length, height;

    //Input
    getData(&length, &height);

    //Calculation
    area = trigArea(length, height);

    //output
    displayData(area, length, height);

    return 0;
}


//getData - gets heigh and length input
void getData(double *len, double *height){

    //input
    printf("Length of Triangle: ");
    scanf("%lf", &(*len));
    printf("Perpendicular Height of Triangle: ");
    scanf("%lf", &(*height));
}


//trigArea - calculates triangle area
double trigArea(double len, double height){

    //declaration & calculation
    double area = len * height * 0.5;
    return area;
}


//displayData - outputs triangle area, length, and height
void displayData(double area, double len, double height){

    //output
    printf("Triangle Length = %.2lf\n", len);
    printf("Triangle Height = %.2lf\n", height);
    printf("Triangle Area = %.2lf\n", area);
}

/*

// Test Run 1
Length of Triangle: 5
Perpendicular Height of Triangle: 5
Triangle Length = 5.00
Triangle Height = 5.00
Triangle Area = 12.50

// Test Run 2
Length of Triangle: 10
Perpendicular Height of Triangle: 5
Triangle Length = 10.00
Triangle Height = 5.00
Triangle Area = 25.00

// Test Run 3
Length of Triangle: 80
Perpendicular Height of Triangle: 25.5
Triangle Length = 80.00
Triangle Height = 25.50
Triangle Area = 1020.00
*/






/****************************************************/
/* Lab 3 Question 4                                 */
/* Name : Rohan Gharibgard                          */
/* Student ID : 1288671                             */
/* Date : 11/8/23                                   */
/* this program calculates a salesperson's pay      */
/****************************************************/


#include<stdio.h>

//function prototype
double get_sales();
double get_advanced_pay();
double determine_comm_rate(double sales);


int main()
{
    //declaration
    double sales, advanced_pay, comm_rate, pay;

    //call functions
    sales = get_sales();
    advanced_pay = get_advanced_pay();
    comm_rate = determine_comm_rate(sales);

    //calculations
    pay = sales * comm_rate - advanced_pay;

    //output
    printf("The pay is $%.2f", pay);

    if (pay < 0)
    {
    printf("\nThe salesperson must reimburse the company.");
    }

    return 0;
}


//get_sales - gets input on salesperson's number of sales
double get_sales(){
    //declaration
    double sales;

    //input
    printf("Enter the monthly sales: ");
    scanf("%lf", &sales);

    return sales;
}


//get_advance_pay - gets input on the advance pay received by the salesperson.
double get_advanced_pay(){
    //declaration
    double advancedPay;

    //input
    printf("Enter the amount of advanced pay, or enter 0 if no advanced pay was given.\n");
    printf("Advanced pay: ");
    scanf("%lf", &advancedPay);

    return advancedPay;
}


// determine_comm_rate - determines the commission rate for the saleserson, 
//                       given the total sales amount
double determine_comm_rate(double sales){
    //declaration
    double comm_rate;

    //if statements
    if (sales < 10000.00)   comm_rate = .10;
    else if (sales < 15000) comm_rate = .12;
    else if (sales < 18000) comm_rate = .14;
    else if (sales < 22000) comm_rate = .16;
    else                    comm_rate = .18;

    return comm_rate;
}

/*

// Test Run 1
Enter the monthly sales: 14550.00  
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced pay: 1000.00
The pay is $746.00


// Test Run 2
Enter the monthly sales: 9500
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced pay: 0
The pay is $950.00


// Test Run 3
Enter the monthly sales: 12000.00
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced pay: 2000    
The pay is $-560.00
The salesperson must reimburse the company.                                                       
*/