// /****************************************************/
// /* Lab 2 Question 1                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* checks wether a character is a vowel             */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// // Declaration
// char inputChar;

// //input
// printf("Enter any character : ");
// scanf("%c", &inputChar);


// // if statements and output
// if(inputChar == 'A' || inputChar == 'a'){
//     printf("%c is a vowel\n", inputChar);
// }
// else if(inputChar == 'E' || inputChar == 'e'){
//     printf("%c is a vowel\n", inputChar);
// }
// else if(inputChar == 'I' || inputChar == 'i'){
//     printf("%c is a vowel\n", inputChar);
// }
// else if(inputChar == 'O' || inputChar == 'o'){
//     printf("%c is a vowel\n", inputChar);
// }
// else if(inputChar == 'U' || inputChar == 'u'){
//     printf("%c is a vowel\n", inputChar);
// }
// else{
//     printf("%c is not a vowel\n", inputChar);
// }

// return 0;
// }

// /*

// Test Run 1
// Enter any character : h
// h is not a vowel

// Test Run 2
// Enter any character : i
// i is a vowel

// Test Run 3
// Enter any character : a
// a is a vowel

// */



// /****************************************************/
// /* Lab 2 Question 2                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* checks if the input is a character or number     */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// //Declaration
// char input;

// //input
// printf("Enter any character : ");
// scanf("%c", &input);

// //if statements and output
// if(input >= 65 && input <= 90){
//     printf("Uppercase character was entered\n");
// }
// else if(input >= 97 && input <= 122){
//     printf("Lowercase character was entered\n");
// }
// else if(input >= 47 && input <= 57){
//     printf("A digit was entered\n");
// }

// return 0;
// }

// /*
// Test Run 1
// Enter any character : C
// Uppercase character was entered

// Test Run 2
// Enter any character : b
// Lowercase character was entered

// Test Run 3
// Enter any character : 5
// A digit was entered

// */





// /****************************************************/
// /* Lab 2 Question 3                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* displays the sign of the number entered          */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// //Decleration
// int num;

// //input
// printf("Enter any number: ");
// scanf("%d", &num);

// //if-statements and output
// if(num < 0){
//     printf("The number is negative\n");
// }
// else if(num > 0){
//     printf("The number is positive\n");
// }
// else{
//     printf("The number is equal to zero\n");
// }

// return 0;
// }

// /*
// Test Run 1
// Enter any number: 0
// The number is equal to zero

// Test Run 2
// Enter any number: 15
// The number is positive

// Test Run 3
// Enter any number: -25
// The number is negative
// */





// /****************************************************/
// /* Lab 2 Question 4                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* checks if a character is a vowel                 */
// /****************************************************/

// #include <stdio.h>
// int main()
// {
// //Declaration
// char input;

// //input
// printf("Enter a character : ");
// scanf("%c", &input);

// //Switch-case and output
// switch(input){
//     case 'a': 
//     case 'A': 
//     case 'E':
//     case 'e':
//     case 'I': 
//     case 'i': 
//     case 'O':
//     case 'o':
//     case 'U':
//     case 'u': 
//         printf("%c is a vowel\n", input);
//         break;

//     default:
//         printf("%c is not a vowel\n", input);
// }

// return 0;
// }

// /*
// Test Run 1
// Enter a character : b
// b is not a vowel

// Test Run 2
// Enter a character : B
// B is not a vowel

// Test Run 3
// Enter a character : e
// e is a vowel
// */





// /****************************************************/
// /* Lab 2 Question 5                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* checks wether a number is even or odd            */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// //Declaration
// int num;

// //input
// printf("Enter a number between 1 to 10 : ");
// scanf("%d", &num);

// //Switch-case and output
// switch(num){
//     case 1: case 3: case 5: case 7: case 9:
//         printf("You entered %d. That is an odd number.\n", num);
//         break;
//     case 2: case 4: case 6: case 8: case 10:
//         printf("You entered %d. That is an even number.\n", num);
//         break;
//     default:
//         printf("Number entered is outside the range.\n", num);
// }

// return 0;
// }

// /*
// Test Run 1
// Enter a number: 5
// You entered 5. That is an odd number.

// Test Run 2
// Enter a number between 1 to 10 : 12
// Number entered is outside the range.

// Test Run 3
// Enter a number between 1 to 10 : 10
// You entered 10. That is an even number.
// */







// /****************************************************/
// /* Lab 2 Question 6                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* counts the negative, positive, and zeroes        */
// /* entered by the user                              */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// //Declaration
// int input;
// int pos = 0, neg = 0, zero = 0;

// //input
// printf("Enter any number , -1 to quit : ");
// scanf("%d", &input);

// //while loop and input
// while(input != -1){
//     if(input > 0){
//         pos++;
//     }
//     else if(input < 0){
//         neg++;
//     }
//     else{
//         zero++;
//     }
//     // input
//     printf("Enter any number , -1 to quit : ");
//     scanf("%d", &input);
// }

// //output
// printf("\nCount of positive numbers entered = %d\n", pos);
// printf("Count of negative numbers entered = %d\n", neg);       
// printf("Count of zeroes numbers entered = %d\n", zero);

// return 0;
// }

// /*
// Test Run 1
// Enter any number , -1 to quit : -12
// Enter any number , -1 to quit : 108
// Enter any number , -1 to quit : -24
// Enter any number , -1 to quit : 0
// Enter any number , -1 to quit : -23
// Enter any number , -1 to quit : -1

// Count of positive numbers entered = 1
// Count of negative numbers entered = 3
// Count of zeroes numbers entered = 1


// Test Run 2
// Enter any number , -1 to quit : 12
// Enter any number , -1 to quit : 5
// Enter any number , -1 to quit : -1

// Count of positive numbers entered = 2
// Count of negative numbers entered = 0
// Count of zeroes numbers entered = 0


// Test Run 3
// Enter any number , -1 to quit : 90
// Enter any number , -1 to quit : -122
// Enter any number , -1 to quit : -5
// Enter any number , -1 to quit : 0
// Enter any number , -1 to quit : 0
// Enter any number , -1 to quit : 240
// Enter any number , -1 to quit : -2
// Enter any number , -1 to quit : -1

// Count of positive numbers entered = 2
// Count of negative numbers entered = 3
// Count of zeroes numbers entered = 2
// */







// /****************************************************/
// /* Lab 2 Question 7                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* calculates the sum of all numbers between        */
// /* m and n                                          */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// //Declaration
// int m, n, sum = 0;

// //Input
// printf("Enter the value of m : ");
// scanf("%d", &m);
// printf("Enter the value of n : ");
// scanf("%d", &n);

// //For loop and calculation
// for (int i = m; i <= n; i++){
//     sum+= i;
// }

// //output
// printf("Sum = %d\n", sum);

// return 0;
// }

// /*
// Test Run 1
// Enter the value of m : 7
// Enter the value of n : 11
// Sum = 45

// Test Run 2
// Enter the value of m : 0 
// Enter the value of n : 100
// Sum = 5050

// Test Run 3
// Enter the value of m : 10
// Enter the value of n : 5
// Sum = 0
// */




// /****************************************************/
// /* Lab 2 Question 8                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* displays the square and cube of first n          */
// /* natural numbers                                  */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// //Declaration
// int n;
// int squared;
// int cubed;

// //Input
// printf("Enter the value of n : ");
// scanf("%d", &n);

// //do-while-loop w/ calculation & output.
// int i = 1;
// printf("\n-----------------------------------------------\n");
// do{
//     //Calculations
//     squared = i * i;
//     cubed = squared * i;

//     //Output
//     printf("|       %-7d|       %-8d|      %-8d|\n", i, squared, cubed);
//     i++;
// } while(i <= n);

// printf("-----------------------------------------------\n");

// return 0;
// }

// /*
// Test Run 1
// Enter the value of n : 5

// -----------------------------------------------
// |       1      |       1       |      1       |
// |       2      |       4       |      8       |
// |       3      |       9       |      27      |
// |       4      |       16      |      64      |
// |       5      |       25      |      125     |
// -----------------------------------------------


// Test Run 2
// Enter the value of n : 10

// -----------------------------------------------
// |       1      |       1       |      1       |
// |       2      |       4       |      8       |
// |       3      |       9       |      27      |
// |       4      |       16      |      64      |
// |       5      |       25      |      125     |
// |       6      |       36      |      216     |
// |       7      |       49      |      343     |
// |       8      |       64      |      512     |
// |       9      |       81      |      729     |
// |       10     |       100     |      1000    |
// -----------------------------------------------

// Test Run 3
// Enter the value of n : 0

// -----------------------------------------------
// |       1      |       1       |      1       |
// -----------------------------------------------

// */






// /****************************************************/
// /* Lab 2 Question 9                                 */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* prints triangle pattern given base size          */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// //Declaration
// int base;

// //Input
// printf("Enter base size of triangle for pattern : ");
// scanf("%d", &base);

// //for-loops & Output
// for(unsigned int i = 1; i <= base; i++){
//     printf("\n");
//     for(unsigned int j = 1; j <= i; j++){
//         printf("%d", j);
//     }
// }
// printf("\n");

// return 0;
// }

// /*
// Test Run 1
// Enter base size of triangle for pattern : 5

// 1
// 12
// 123
// 1234
// 12345


// Test Run 2
// Enter base size of triangle for pattern : 3

// 1
// 12
// 123


// Test Run 3
// Enter base size of triangle for pattern : 12

// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789
// 12345678910
// 1234567891011
// 123456789101112
// */




// /****************************************************/
// /* Lab 2 Question 10                                */
// /* Name : Rohan Gharibgard                          */
// /* Student ID : 1288671                             */
// /* Date : 9/29/23                                   */
// /* prints triangle pattern given highest alphabet   */
// /****************************************************/

// #include <stdio.h>

// int main()
// {
// //Declaration
// char highest;

// //input
// printf("Enter highest alphabet : ");
// scanf("%c", &highest);

// //for-loop & output
// for( int i = 65; i <= highest; i++ ){
//     for( int j = 65; j <= i; j++){
//         printf("%c", j);
//     }
//     printf("\n");

// }

// return 0;
// }

// /*
// Test Run 1
// Enter highest alphabet : F
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF

// Test Run 2
// Enter highest alphabet : A
// A

// Test Run 3
// Enter highest alphabet : Z
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF
// ABCDEFG
// ABCDEFGH
// ABCDEFGHI
// ABCDEFGHIJ
// ABCDEFGHIJK
// ABCDEFGHIJKL
// ABCDEFGHIJKLM
// ABCDEFGHIJKLMN
// ABCDEFGHIJKLMNO
// ABCDEFGHIJKLMNOP
// ABCDEFGHIJKLMNOPQ
// ABCDEFGHIJKLMNOPQR
// ABCDEFGHIJKLMNOPQRS
// ABCDEFGHIJKLMNOPQRST
// ABCDEFGHIJKLMNOPQRSTU
// ABCDEFGHIJKLMNOPQRSTUV
// ABCDEFGHIJKLMNOPQRSTUVW
// ABCDEFGHIJKLMNOPQRSTUVWX
// ABCDEFGHIJKLMNOPQRSTUVWXY
// ABCDEFGHIJKLMNOPQRSTUVWXYZ
// */


