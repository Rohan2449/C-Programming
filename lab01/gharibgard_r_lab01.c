// /****************************************************/
// /* Lab 1 Question 2                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/9/23                                    */
// /* Does math operations on two numbers              */
// /****************************************************/

// #include <stdio.h>

// int main()
// {

// // Decleration
// int num1, num2;
// int sum, product, remainder, difference;
// float quotient;

// // Input
// printf("Enter two numbers: ");
// scanf("%d %d", &num1, &num2);

// // calculations
// sum = num1 + num2;
// difference = num1 - num2;
// product = num1 * num2;
// remainder = num1 % num2;
// quotient = (float) num1 / num2;

// //Output
// printf("The sum is %i\n", sum);
// printf("The product is %i\n", product);
// printf("The difference is %i\n", difference);
// printf("The quotient is %f\n", quotient);
// printf("The remainder is %i\n", remainder);

// return 0;

// }

// //Test Run 1
// // Enter two numbers: 4 3
// // The sum is 7
// // The product is 12
// // The difference is 1
// // The quotient is 1.333333
// // The remainder is 1

// // Test Run 2
// // Enter two numbers: 10 2
// // The sum is 12
// // The product is 20
// // The difference is 8
// // The quotient is 5.000000
// // The remainder is 0




// /****************************************************/
// /* Lab 1 Question 3                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/9/23                                    */
// /* splits a number into single digits               */
// /****************************************************/

// #include <stdio.h>

// int main()
// {

// //Declaration
// int num;
// int digit1, digit2, digit3, digit4, digit5;

// //Input
// printf("Enter a number : ");
// scanf("%d", &num);

// //Calculations
// digit1 = num % 10;
// num /= 10;
// digit2 = num % 10;
// num /= 10;
// digit3 = num % 10;
// num /= 10;
// digit4 = num % 10;
// num /= 10;
// digit5 = num % 10;

// //Output
// printf("%i %i %i %i %i\n", digit5, digit4, digit3, digit2, digit1);

// return 0;
// }

// //Output
// // Test Run 1
// // Enter a number : 43215
// // 4 3 2 1 5           

// // Test Run 2
// // Enter a number : 92343
// // 9 2 3 4 3

// // Test Run 3
// // Enter a number : 12345
// // 1 2 3 4 5



// /****************************************************/
// /* Lab 1 Question 4                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/9/23                                    */
// /* Given radius, displays information of circle     */
// /****************************************************/

// #include <stdio.h>

// #define PI 3.14519

// int main()
// {

// // Declaration
// float radius;
// double circumference, area, diameter;

// // Input
// printf("The radius of the circle is ");
// scanf("%f", &radius);

// // Calculations
// circumference = 2 * radius * PI;
// area = PI * radius * radius;
// diameter = 2 * radius;

// Output
// printf("The diameter of the circle is %f\n", diameter);
// printf("The area of the circle is %f\n", area);
// printf("The circumference is %f\n", circumference);
// }

// // Test Run 1
// // The radius of the circle is 5
// // The diameter of the circle is 10.000000
// // The area of the circle is 78.629750
// // The circumference is 31.451900

// // Test Run 2
// // The radius of the circle is 3
// // The diameter of the circle is 6.000000
// // The area of the circle is 28.306710
// // The circumference is 18.871140

// // Test Run 3
// // The radius of the circle is 5.5
// // The diameter of the circle is 11.000000
// // The area of the circle is 95.141998
// // The circumference is 34.597090





// /****************************************************/
// /* Lab 1 Question 5                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/9/23                                    */
// /* adds two fractions together                      */
// /****************************************************/

// #include <stdio.h>

// int main()
// {

// //Declaration
// int firstNumerator, firstDenominator;
// int secNumerator, secDenominator;
// int sumNumerator, sumDenominator;

// //Input
// printf("Enter First fraction: ");
// scanf("%d / %d", &firstNumerator, &firstDenominator);
// printf("Enter Second fraction: ");
// scanf("%d / %d", &secNumerator, &secDenominator);

// //Calculations
// sumDenominator = firstDenominator * secDenominator;
// sumNumerator = firstNumerator * secDenominator + secNumerator * firstDenominator;

// //Output
// printf("The sum of the two fractions is %i/%i\n", sumNumerator, sumDenominator);
// }

// // Test Run 1
// // Enter First fraction: 2/3
// // Enter Second fraction: 1/2
// // The sum of the two fractions is 7/6

// // Test Run 2
// // Enter First fraction: 4/5
// // Enter Second fraction: 3/4
// // The sum of the two fractions is 31/20

// // Test Run 3
// // Enter First fraction: -3/4
// // Enter Second fraction: 1/2
// // The sum of the two fractions is -2/8
