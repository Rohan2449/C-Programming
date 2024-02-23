// /****************************************************************/
// /* Lab 4 Question 1                                             */
// /* Name : Rohan Gharibgard                                      */
// /* Student ID : 1288671                                         */
// /* Date : 12/6/23                                               */
// /* interchanges the largest and the smallest number in an array */
// /****************************************************************/
 
//  #include <stdio.h>

// // function prototype
// void read_array(int nums[], int n);
// void display_array(int nums[], int n);

// int main(){

//     //declaration
//     int array_size, small_index, large_index, temp;


//     //input
//     printf("Enter the desired size of the array: ");
//     scanf("%d", &array_size);

//     // create array
//     int nums[array_size];

//     //input
//     read_array(nums, array_size);
    
//     //output initial array
//     printf("The elements of the array are:\n");
//     display_array(nums, array_size);

//     //find smallest and largest index
//     small_index = large_index = 0;
//     for(int i = 0; i < array_size; i++){
//         if(nums[i] >= nums[large_index])
//             large_index = i;
//         else if (nums[i] < nums[small_index])
//             small_index = i;
//     }
    
//     //switch smallest and largest
//     temp = nums[small_index];
//     nums[small_index] = nums[large_index];
//     nums[large_index] = temp;
    
//     //output altered array
//     printf("\n\nThe elements of the array after the interchange are:\n");
//     display_array(nums, array_size);
//     return 0;
// }


// // recieves input for each element in the array
// void read_array(int nums[], int n){
//     for(int i = 0; i < n; i++){
//         printf("Enter a number for position %i:", i);
//         scanf("%d", &nums[i]);
//     }
//     printf("\n\n");
// }


// //displays the elements in the array
// void display_array(int nums[], int n){
//     for(int i = 0; i < n; i++){
//         printf("arr[%i]=%i ", i, nums[i]);
//     }
//     printf("\n");
// }

// /*
// //Test Run 1
// Enter the desired size of the array: 5
// Enter a number for position 0:3
// Enter a number for position 1:6
// Enter a number for position 2:3
// Enter a number for position 3:7
// Enter a number for position 4:9


// The elements of the array are:
// arr[0]=3 arr[1]=6 arr[2]=3 arr[3]=7 arr[4]=9 


// The elements of the array after the interchange are:
// arr[0]=9 arr[1]=6 arr[2]=3 arr[3]=7 arr[4]=3 


// //Test Run 2
// Enter the desired size of the array: 4
// Enter a number for position 0:1
// Enter a number for position 1:2
// Enter a number for position 2:3
// Enter a number for position 3:4


// The elements of the array are:
// arr[0]=1 arr[1]=2 arr[2]=3 arr[3]=4 


// The elements of the array after the interchange are:
// arr[0]=4 arr[1]=2 arr[2]=3 arr[3]=1 



// //Test Run 3
// Enter the desired size of the array: 6
// Enter a number for position 0:9
// Enter a number for position 1:8
// Enter a number for position 2:3
// Enter a number for position 3:5
// Enter a number for position 4:7
// Enter a number for position 5:2


// The elements of the array are:
// arr[0]=9 arr[1]=8 arr[2]=3 arr[3]=5 arr[4]=7 arr[5]=2 


// The elements of the array after the interchange are:
// arr[0]=2 arr[1]=8 arr[2]=3 arr[3]=5 arr[4]=7 arr[5]=9 
// */





// /****************************************************************/
// /* Lab 4 Question 2                                             */
// /* Name : Rohan Gharibgard                                      */
// /* Student ID : 1288671                                         */
// /* Date : 12/6/23                                               */
// /* finds the first and second largest element in an array       */
// /****************************************************************/

// #include <stdio.h>

// // function prototype
// void read_array(int nums[], int n);
// void display_array(int nums[], int n);
// void sort_array(int nums[], int n);


// int main(){
//     //declaration
//     int array_size;
//     //input
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &array_size);

//     //create array
//     int nums[array_size];

//     //input array elements
//     printf("\n");
//     read_array(nums, array_size);

//     //display array
//     display_array(nums, array_size);

//     //sort array
//     sort_array(nums, array_size);

//     //output
//     printf("The largest of these numbers is: %i\n", nums[array_size -1]);
//     printf("The second largest of these numbers is: %i\n", nums[array_size - 2]);



//     return 0;
// }


// //recieves input for elements in the array
// void read_array(int nums[], int n){
//     for(int i = 0; i < n; i++){
//         printf("Enter the number: ");
//         scanf("%d", &nums[i]);
//     }
//     printf("\n");
// }


// //displays the elements in the array
// void display_array(int nums[], int n){
//     printf("The number you entered are: ");
//     for(int i = 0; i < n; i++){
//         printf("%i ", nums[i]);
//     }
//     printf("\n");
// }


// //sorts the array in ascending order
// void sort_array(int nums[], int n){
//     int temp;
//     for(int i = 0; i < n-1; i++){
//         for (int j = 0; j < n-1; j++){
//             if(nums[j] > nums[j+1]){
//                 temp = nums[j];
//                 nums[j] = nums[j+1];
//                 nums[j+1] = temp;
//             }
//         }
//     }
// }


// /*
// //Test Run 1
// Enter the number of elements in the array: 6

// Enter the number: 10
// Enter the number: 35
// Enter the number: 60
// Enter the number: 34
// Enter the number: 20
// Enter the number: 46

// The number you entered are: 10 35 60 34 20 46 
// The largest of these numbers is: 60
// The second largest of these numbers is: 46


// //Test Run 2
// Enter the number of elements in the array: 8

// Enter the number: 10
// Enter the number: -45
// Enter the number: -1
// Enter the number: -68
// Enter the number: -73
// Enter the number: -93
// Enter the number: -1000
// Enter the number: -304

// The number you entered are: 10 -45 -1 -68 -73 -93 -1000 -304 
// The largest of these numbers is: 10
// The second largest of these numbers is: -1


// //Test Run 3
// Enter the number of elements in the array: 9

// Enter the number: 3
// Enter the number: 4
// Enter the number: 87
// Enter the number: 34
// Enter the number: 20
// Enter the number: -50
// Enter the number: 0
// Enter the number: 8
// Enter the number: 2

// The number you entered are: 3 4 87 34 20 -50 0 8 2 
// The largest of these numbers is: 87
// The second largest of these numbers is: 34
// */



// /****************************************************************/
// /* Lab 4 Question 3                                             */
// /* Name : Rohan Gharibgard                                      */
// /* Student ID : 1288671                                         */
// /* Date : 12/6/23                                               */
// /* finds whether the array contains a duplicate number          */
// /****************************************************************/



// #include <stdio.h>

// // function prototype
// void read_array(int nums[], int n);
// void display_array(int nums[], int n);
// void check_duplicate(int nums[], int n);

// int main(){
//     //declaration
//     int array_size;
//     //input
//     printf("Enter the size of the array:");
//     scanf("%d", &array_size);

//     //create array
//     int nums[array_size];

//     //input array elements
//     read_array(nums, array_size);

//     //display array
//     display_array(nums, array_size);

//     //check for duplicate
//     check_duplicate(nums, array_size);




//     return 0;
// }


// //recieves input for elements in the array
// void read_array(int nums[], int n){
//     for(int i = 0; i < n; i++){
//         scanf("%d", &nums[i]);
//     }
//     printf("\n");
// }


// //displays the elements in the array
// void display_array(int nums[], int n){
//     printf("The numbers you entered are: ");
//     for(int i = 0; i < n; i++){
//         printf("%i ", nums[i]);
//     }
//     printf("\n");
// }


// //sorts the array in ascending order
// void check_duplicate(int nums[], int n){        
//     for(int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             if(j != i && nums[j] == nums[i]){
//                 printf("Duplicate number %i found at location %i and %i\n", nums[i], i, j);  
//                 return;
//             }
//         }
//     }
//     printf("No duplicate number found\n");
// }

// /*
// //Test Run 1

// Enter the size of the array:6
// 1
// 2
// 3
// 3
// 4
// 5

// The numbers you entered are: 1 2 3 3 4 5 
// Duplicate number 3 found at location 2 and 3   


// //Test Run 2
// Enter the size of the array:5
// 3
// 8
// 2
// 9
// 3

// The numbers you entered are: 3 8 2 9 3 
// Duplicate number 3 found at location 0 and 4


// //Test Run 3
// Enter the size of the array:5
// 1
// 7
// 7
// 9
// 7

// The numbers you entered are: 1 7 7 9 7 
// Duplicate number 7 found at location 1 and 2
// */


// /****************************************************************/
// /* Lab 4 Question 4                                             */
// /* Name : Rohan Gharibgard                                      */
// /* Student ID : 1288671                                         */
// /* Date : 12/6/23                                               */
// /* reads and prinst the text until a * is encountered           */
// /****************************************************************/

// #include <stdio.h>

// int main(){
//     //declaration
//     char text[30];
//     char c;
//     int i = 0;

//     printf("Enter * to end\n");
//     printf("Enter the text : ");

//     //input
//     do{
//         c = getchar();
//         text[i] = c;
//         i++;
//     } while(c != '*');

//     //output
//     text[i-1] = '\0';
//     printf("The text is : %s\n", text);
//     printf("The count of the characters is : %i\n", i-1);

//     return 0;
// }

// /*
// //Test Run 1
// Enter * to end
// Enter the text : Hi there*
// The text is : Hi there
// The count of the characters is : 8

// //Test Run 2
// Enter * to end
// Enter the text : My name i*s Rohan
// The text is : My name i
// The count of the characters is : 9

// //Test Run 3
// Enter * to end
// Enter the text : Hello Professor* Loke
// The text is : Hello Professor
// The count of the characters is : 15

// */


// /****************************************************************/
// /* Lab 4 Question 5                                             */
// /* Name : Rohan Gharibgard                                      */
// /* Student ID : 1288671                                         */
// /* Date : 12/6/23                                               */
// /* counts the number of words in a sentence                     */
// /****************************************************************/

// #include <stdio.h>

// int main(){
//     //declaration
//     char text[50];
//     int words = 0;

//     //input
//     printf("Enter the sentence : ");
//     gets(text);

//     //count words;
//     int i = 0;
//     while(text[i] != '\0'){
//         if(text[i] == ' ')
//             words++;
//         i++;
//     }

//     //output
//     if(i > 0){
//         printf("The total count of words is : %i\n", words + 1);
//     }
//     else{
//         printf("The total count of words is : %i\n", words);
//     }

//     return 0;
// }

// /*
// //Test Run 1
// Enter the sentence : How are you
// The total count of words is : 3

// //Test Run 2
// Enter the sentence : Today is December 7
// The total count of words is : 4

// //Test Run 3
// Enter the sentence : 
// The total count of words is : 0

// */



// /****************************************************************/
// /* Lab 4 Question 6                                             */
// /* Name : Rohan Gharibgard                                      */
// /* Student ID : 1288671                                         */
// /* Date : 12/6/23                                               */
// /* Replace all the commas in a text with semi colons            */
// /****************************************************************/

// #include <stdio.h>

// int main(){
//     //declaration
//     char text[50];

//     //input
//     printf("Enter the text : ");
//     gets(text);

//     //replace commas with semi colons
//     int i = 0;
//     while (text[i] != '\0'){
//         if(text[i] == ',')
//             text[i] = ';';
//         i++;
//     }

//     //output
//     printf("The copied text is : %s\n", text);

//     return 0;
// }

// /*
// //Test Run 1
// Enter the text : Hello, how are you
// The copied text is : Hello; how are you

// //Test Run 2
// Enter the text : This, program, deserves, an, A,
// The copied text is : This; program; deserves; an; A;

// //Test Run 3
// Enter the text : Well, how is class?
// The copied text is : Well; how is class?
// */


/****************************************************************/
/* Lab 4 Question 7                                             */
/* Name : Rohan Gharibgard                                      */
/* Student ID : 1288671                                         */
/* Date : 12/6/23                                               */
/* counts the number of times a pattern is repeated in a text   */
/****************************************************************/

#include <stdio.h>

int main(){
    //declaration
    char text[100];
    char pattern[50];
    int len = 0, repeats = 0;
    

    //input
    printf("Enter string : ");
    gets(text);

    printf("Enter the pattern : ");
    gets(pattern);

    //find length of pattern
    while (pattern[len] != '\0')
        len++;


    //check how many times the pattern appears in the string
    int i = 0, j = 0;
    while(text[i] != '\0'){
        if(text[i] == pattern[j]){
            j++;
            if(j == len){
                repeats++;
            }
        }
        else{
            j = 0;
        }
        i++;
    }

    //output
    printf("\nPattern found %d times\n", repeats);

    return 0;
}

/*
//Test Run 1
Enter string : She sells sea shells on the sea shore
Enter the pattern : sea

Pattern found 2 times

//Test Run 2
Enter string : How many times does s appear in this sentence?
Enter the pattern : s

Pattern found 5 times

//Test Run 3
Enter string : How many times does ' ' appear in this sentence?
Enter the pattern :  

Pattern found 9 times
*/
