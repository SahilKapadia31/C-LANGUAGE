#include <stdio.h>
#include <math.h>
#include <string.h>

// int main(){
//     printf("Hello World");
//     return 0;
// }

// int main(){
//     int age = 22;
//     printf("age is %d", age);
//     return 0;
// }

// int main(){
//     float pi = 3.14;
//     printf("age is %f", pi);
//     return 0;
// }

// int main(){
//     char hashtag = '#';
//     printf("age is %c", hashtag);
//     return 0;
// }

// int main(){
//     int age;
//     printf("enter age");
//     scanf("%d", &age);
//     printf("age is : %d", age);
//     return 0;

// }

// int main(){
//     int a,b;
//     printf("enter a");
//     scanf("%d", &a);

//     printf("enter b");
//     scanf("%d", &b);

//     int sum = a+b;
//     printf("sum is : %d", sum);

//     printf("sum is : %d", a+b);
//     return 0;
// }

// int main(){
//     int side;
//     printf("enter side");
//     scanf("%d", &side);
//     printf("area is : %d", side*side);
//     return 0;
// }

// int main(){
//     float radius;
//     printf("enter radius");
//     scanf("%f", &radius);
//     printf("area is : %f", radius*radius*3.14);
//     return 0;
// }

// int main(){
//     float number;
//     printf("enter number");
//     scanf("%f", &number);
//     printf("cube of number is : %f", number*number*number);
//     return 0;
// }

// my code

// int main(){
//     float l,w;
//     printf("enter l");
//     scanf("%f", &l);
//     printf("enter w");
//     scanf("%f", &w);
//     printf("perimeter is : %f", 2*(l+w));
//     return 0;
// }

// chat gpt code

// int main() {
//     float side_a, side_b;

//     // Input the sides of the rectangle from the user
//     printf("Enter the length of side a: ");
//     scanf("%f", &side_a);

//     printf("Enter the length of side b: ");
//     scanf("%f", &side_b);

//     // Calculate the perimeter of the rectangle
//     float perimeter = 2 * (side_a + side_b);

//     // Output the result
//     printf("The perimeter of the rectangle is: %.2f\n", perimeter);

//     return 0;
// }

// int main(){
//     int a = 5*2/2*3;
//     printf("%d\n",a);
//     return 0;
// }

// int main(){
//     int x;
//     printf("enter a No. :");
//     scanf("%d", &x);
//     printf("%d", x % 2 == 0);
//     return 0;
// }

// int main(){
//     int issunday=1;
//     int issnowing=1;
//     printf("%d", issunday && issnowing);
//     return 0;
// }

// int main(){
//     int issunday=0;
//     int issnowing=1;
//     printf("%d", issunday || issnowing);
//     return 0;
// }

// int main(){
//     float x,y,z;
//     printf("value of x:");
//     scanf("%f", &x);
//     printf("value of y:");
//     scanf("%f", &y);
//     printf("value of z:");
//     scanf("%f", &z);

//     printf("%f", (x + y + z)/3);
//     return 0;
// }

// Q. check the character is digit or not......

// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     // Check if the character is a digit using ASCII values
//     int is_digit =  ((ch >= '0') & (ch <= '9'));

//     printf("The character '%c' is %s a digit.\n", ch, is_digit ? "" : "not");

//     return 0;
// }

// just time pass

// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     printf("%c", ((ch >= '0') & (ch <= '9')));
//     return 0;
// }

//  IF AND ELSE CONDITION

// int main(){
//     int age;
//     printf("enter age :");
//     scanf("%d", &age);

//     if(age >= 18 ){
//         printf("adult\n");
//         printf("They can vote");
//     }
//     else{
//         printf("teen");
//     }
//     return 0;
// }

// int main(){
//     int age;
//     printf("enter age :");
//     scanf("%d", &age);

//     if(age >= 18 ){
//         printf("adult\n");
//         printf("They can vote");
//     }
//     else if( age >= 13 && age < 18){
//         printf("teen");
//     }
//     else{
//         printf("child");
//     }
//     return 0;
// }

// int main(){
//     int marks;
//     printf("enter number (1-100) :");
//     scanf("%d", &marks);

//     // TERNARY
//     marks <= 30 ? printf("Fail") : printf("Pass");

//     // if (marks >= 30 && marks <= 100)
//     // {
//     //    printf("PASS");
//     // }
//     // else
//     // {
//     //     printf("FAIL");
//     // }

//     return 0;
// }

// TERNARY OPERATOR

// int main(){
//     int age;
//     printf("enter age :");
//     scanf("%d", &age);

//     age >= 18? printf("adult") : printf("teen");
//     return 0;
// }

// SWITCH

// int main(){
//     int day;
//     printf("enter day (1-7) :");
//     scanf("%d", &day);

//     switch (day)
//     {
//     case 1 : printf("monday");
//         break;
//     case 2 : printf("tuesday");
//         break;
//     case 3 : printf("wednesday");
//         break;
//     case 4 : printf("thursday");
//         break;
//     case 5 : printf("friday");
//         break;
//     case 6 : printf("saturday");
//         break;
//     case 7 : printf("sunday");
//         break;

//     default: printf("INVALID");
//         break;
//     }
//     return 0;
// }

// int main(){
//     char day;
//     printf("enter day (1-7) :");
//     scanf("%c", &day);   // You can use %s too instead of %c

//     switch (day)
//     {
//     case 'm' : printf("monday");
//         break;
//     case 't' : printf("tuesday");
//         break;
//     case 'w' : printf("wednesday");
//         break;
//     case 'T' : printf("thursday");
//         break;
//     case 'f' : printf("friday");
//         break;
//     case 's' : printf("saturday");
//         break;
//     case 'S' : printf("sunday");
//         break;

//     default: printf("INVALID");
//         break;
//     }
//     return 0;
// }

// int main()
// {
//     int marks;
//     printf("enter number (1-100) :");
//     scanf("%d", &marks);

//     // TERNARY
//     // marks <= 30 ? printf("Fail") : printf("Pass");

//     if (marks < 30)
//     {
//         printf("C grade");
//     }
//     else if (marks >= 30 && marks < 70)
//     {
//         printf("B grade");
//     }
//     else if (marks >= 70 && marks < 90)
//     {
//         printf("A grade");
//     }
//     else if (marks >= 90 && marks <= 100)
//     {
//         printf("A+ grade");
//     }
//     else
//     {
//         printf("INVALID");
//     }

//     return 0;
// }

// int main()
// {
//     char ch;
//     printf("enter character:");
//     scanf("%c", &ch);

//     if (ch >= 'a' && ch <= 'z')
//     {
//         printf("lower case");
//     }
//     if (ch >= 'A' && ch <= 'Z')
//     {
//         printf("Upper case");
//     }

//     else
//     {
//         printf("special character");
//     }

//     return 0;
// }

// int main()
// {
//     char ch;
//     printf("enter the character = ");
//     scanf("%c", &ch);

//     if (ch >= '0' && ch <= '9')
//     {
//         printf("is digit");
//     }

//     else
//     {
//         printf("is not digit");
//     }

//     return 0;
// }

// int main()
// {
//     int n1, n2;
//     printf("enter no 1 :");
//     scanf("%d", &n1);
//     printf("enter no 2 :");
//     scanf("%d", &n2);

//     if (n1 > n2)
//     {
//         printf("The smallest no. is %d", n2);
//     }
//     else
//     {
//         printf("The smallest no. is %d", n1);
//     }
// }

// Q. CHECK THE NO. IS NATURAL OR NOT

// int main()
// {
//     int N;
//     printf("enter a number:");
//     scanf("%d", &N);

//     if (N > 0)
//     {
//         printf("%d is a natural number", N);
//     }
//     else
//     {
//         printf("%d is not a natural number", N);
//     }
//     return 0;
// }

// Q. CHECK THE NO. IS ARMSTRONG NO. OR NOT  ......IMP

// int main()
// {
//     int number, inputCheckingNumber, remainder, sum = 0;
//     printf("Enter a number:");
//     scanf("%d", &number);
//     inputCheckingNumber = number;

//     while (number > 0)
//     {
//         remainder = number % 10;
//         sum = sum + (remainder * remainder * remainder);
//         number = number / 10;
//     }
//     if (inputCheckingNumber == sum)
//         printf("%d is an Armstrong number.", inputCheckingNumber);
//     else
//         printf("%d is not an Armstrong number.", inputCheckingNumber);

//     return 0;
// }

// LOOPS STARTED

// [1] FOR LOOP

// int main()
// {
//     int n;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }

// SUM OF NUMBER FROM 0 TO N.

// int main()
// {
//     int n,sum=0;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         sum=sum+i;
//     }
//         printf("sum is %d\n", sum);

//     return 0;
// }

// to be check in GDB

// int main()
// {
//     int i = 5;
//     do
//     {
//         printf("%d\n", i);
//         i--;
//     } while (i >= 1);
//     return 0;
// }

// int main() {
//     int n;

//     do {
//         printf("Enter a number: ");
//         scanf("%d", &n);

//         if (n % 2 != 0) {
//             printf("You entered an odd number: %d\n", n);
//             break; // Exit the loop when an odd number is entered
//         }
//     } while (1); // Infinite loop until an odd number is entered

//     return 0;
// }

// CHECK THE NO .IS MULTIPLY BY 7 OR NOT.

// int main()
// {
//     int n;

//     do
//     {
//         printf("Enter a number: ");
//         scanf("%d", &n);

//         if (n % 7 == 0)
//         {
//             break;
//         }
//     } while (1);
//     printf("true");
//     return 0;
// }

// WRITE ALL ODD NO. BETWEEN 5 TO 50

// int main()
// {
//     int n;

//     for (int i = 5; i <= 50; i++)
//     {
//         if(i % 2 != 0){
//             printf("%d\n", i);
//         }

//     }

//     return 0;
// }

// FIND THE FACTORIAL OF NUMBER 'N'.

// int main()
// {
//     int n,fact=1;
//     printf("Enter a number:");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         fact=fact*i;
//     }
//         printf("Factorial is %d\n", fact);

//     return 0;
// }

//  CALCULATE ALL THE NO. BETWEEN 5 TO 50 INCLUDING BOTH NUMBERS.

// int main()
// {
//     int sum=0;

//     for (int i = 5; i <= 50; i++)
//     {
//         sum=sum+i;
//     }
//         printf("sum is %d\n", sum);

//     return 0;
// }

// PRINT STAR PATTERN

// int main() {
//     int rows = 4; // Number of rows in the pattern
//     int columns = 5; // Number of columns in the pattern

//     for (int i = 0; i < rows; i++) {
//         for (int j = 4; j < columns; j++) {
//             printf("*");
//             printf("  ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Write a program to check if a number is prime or not
//
// int main()
// {
//     int n, count = 0;
//     printf("Enter a number:");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         printf("%d is a prime no.", n);
//     }
//     else
//     {
//         printf("%d is not a prime no.", n);
//     }
//     return 0;
// }

// Write a program to print prime numbers in a range..............................................

// int main()
// {
//     int start, end, isPrime;
//     printf("Enter a number:");
//     scanf("%d %d", &start, &end);

//     for (int check = start; check <= end; check++)
//     {
//         isPrime = 1;
//         for (int i = 2; i < check; i++)
//         {
//             if (check % i == 0)
//             {
//                 isPrime = 0;
//                 break;
//             }
//         }

//         if (isPrime == 1)
//         {
//             printf("%d\n", check);
//         }
//     }
//     return 0;
// }

// FUNCTIONS & RECURSION.....................\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

// void printHello();

// int main()
// {
//     printHello(); // function call
//     printHello();
//     printHello();
//     return 0;
// }
// // function definations
// void printHello()
// {
//     printf("Hello world\n");
// }

// Q. WRITE TWO FUNCTIONS - ONE TO PRINT "HELLO" & SECOND TO PRINT "GOOD BYE".

// void printHello();
// void printGoodbye();

// int main()
// {
//     printHello(); // function call
//     printGoodbye();
//     return 0;
// }
// // function definations
// void printHello()
// {
//     printf("Hello\n");
// }
// void printGoodbye()
// {
//     printf("Good Bye\n");
// }

// Q. WRITE A FUNCTION THAT PRINTS NAMASTE IF USER IS INDIAN & BONJOUR IF THE USER IS FRENCH.

// void Namaste();
// void Bonjour();

// int main()
// {
//     char ch;
//     printf("Enter f for french & i for indian:");
//     scanf("%c", &ch);
//     if (ch == 'i')
//     {
//         Namaste(); // function call
//     }
//     else
//     {
//         Bonjour();
//     }
//     return 0;
// }
// // function definations
// void Namaste()
// {
//     printf("Namaste\n");
// }
// void Bonjour()
// {
//     printf("Bonjour\n");
// }

// EXAMPLE 2
// void printTable(int n);

// int main()
// {
//     int n;
//     printf("Enter number:");
//     scanf("%d", &n);
//     printTable(n); // argument or actual parameter

//     return 0;
// }

// void printTable(int n) // formal parameter
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", i * n);
//     }
// }

// // EXAMPLE 3
// int sum(int a, int b);

// int main()
// {
//     int a, b;
//     printf("Enter fist number:");
//     scanf("%d", &a);
//     printf("Enter second number:");
//     scanf("%d", &b);

//     int s = sum(a, b);
//     printf("sum is %d", s);

//     return 0;
// }

// int sum(int a, int b)
// {
//     return a + b;
// }

// EX.......

// void calculatePrice(float value);

// int main(){
//     float value = 100;
//     calculatePrice(value);
//     printf("Value is : %f", value);
//     return 0;
// }

// void calculatePrice(float value){
//     value= value +(0.18 * value);
//     printf("Final price is : %f\n", value);
// }

// Q.USE LIBRARY FUNCTION TO CALCULATE THE SQUARE OF A NUMBER GIVEN GIVEN BY USER.

// void calculatePrice(float value);

// int main(){
//     int n = 4;
//     printf("%f", pow(n,2));
//     return 0;
// }

// void calculatePrice(float value){
//     value= value +(0.18 * value);
//     printf("Final price is : %f\n", value);
// }

// Q. WRITE FUNCTIONS TO CALCULATE AREA OF A SQUARE, A CIRCLE & A RECTANGLE.

// RECURSION EX...

// void printHW(int count);

// int main()
// {
//     printHW(5);
//     return 0;
// }

// // recursive function
// void printHW(int count)
// {
//     if (count == 0)
//     {
//         return;
//     }
//     printf("hello world\n");
//     printHW(count-1);
// }

// Q.SUM OF FIRST N NATURAL NO.

// int sum(int n);

// int main()
// {
//     printf("sum is : %d", sum(5));
//     return 0;
// }
// recursive function
// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }

//     int sumNm1 = sum(n-1); // sum of 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;
// }

// Q. FACTORIAL OF N.

// int facto(int n);

// int main()
// {
//     printf("factorial is : %d", facto(5));
//     return 0;
// }

// // recursive function
// int facto(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     // int factorialNm1 = facto(n-1); // sum of 1 to n
//     int factoN = facto(n-1) * n;
//     return factoN;
// }

// Q. CONVERT TEMP. FROM CELSIUS(C) TO FAHRENHEIT(F).

// float convertTemp(float celsius);

// int main()
// {
//     float far = convertTemp(0);
//     printf("far : %f", far);
//     return 0;
// }

// // recursive function
// float convertTemp(float celsius)
// {
//     float far = celsius * (9.0 / 5.0) + 32;
//     return far;
//     // return ((celsius * (9.0 / 5.0)) + 32); use can write in this manner too.......
// }

// Q. CALCULATE PERCENTAGE OF A STUDENT FROM MARKS IN MATHS, SCIENCE & ENGLISH.

// float calPercentage(float sci, float maths, float eng);

// int main()
// {
//     int sci=91;
//     int maths=98;
//     int eng=85;
//     float percentage = calPercentage(sci, maths, eng);
//     printf("percentage is : %f", percentage);
//     return 0;
// }

// // recursive function
// float calPercentage(float sci, float maths, float eng)
// {
//     float percentage = (maths + sci + eng) / 3;
//     return percentage;
// }

// Q. PRINT N NUMBER OF FIBONACCI NUMBER.

// int fib(int n);

// int main()
// {
//     fib(5);
//     return 0;
// }

// // recursive function
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     int fibN = fib(n - 1) + fib(n - 2);
//     printf("fib of %d is : %d\n", n, fibN);
//     return fibN;
// }

// Q. PRINT N'th NUMBER OF FIBONACCI NUMBER.

// int fib(int n);

// int main()
// {
//     printf("%d", fib(10));
//     return 0;
// }

// // recursive function
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     int fibN = fib(n - 1) + fib(n - 2);
//     // printf("fib of %d is : %d\n", n, fibN);
//     return fibN;
// }

// POINTERS EXAMPLES //////////////////

// int main()
// {
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     // address
//     // printf("%p\n", &age);
//     printf("%u\n", &age);
//     printf("%u\n", ptr);
//     printf("%u\n", &ptr);
//     return 0;
// }

// int main()
// {
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     // value
//     // printf("%p\n", &age);
//     printf("%d\n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));
//     return 0;
// }

// int main()
// {
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     return 0;
// }

// POINTER TO POINTER EXAMPLES......./////

// Q. PRINT THE VALUE OF 'X' FROM IT'S POINTER TO POINTER

// int main()
// {
//     int x = 5;
//     int *ptr = &x;
//     int **pptr = &ptr;

//     printf("%d", **pptr);
//     return 0;
// }

// Q. CALCULATE THE SUM, PRODUCT & AVERAGE OF 2 NUMBERS. PRINT THAT AVERAGE IN THE MAIN FUNCTION.

// void doWork(int a, int b, int *sum, int *prod, int *avg);

// int main()
// {
//     int a, b, sum, prod, avg;
//     printf("Enter 1'st number :", a);
//     scanf("%d", &a);
//     printf("Enter 2'nd number :", b);
//     scanf("%d", &b);

//     doWork(a, b, &sum, &prod, &avg);
//     printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
// }

// void doWork(int a, int b, int *sum, int *prod, int *avg)
// {
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b) / 2;
// }

// Q. EXAMPLE OF ARRAYS.............../////////////

// int main()
// {
//     // int marks1 = 95;
//     // int marks2 = 95;
//     // int marks3 = 95;

//     int marks[3] = {95, 95, 95};
//     return 0;
// }

// int main()
// {
//     int marks[3];
//     printf("enter phy : ");
//     scanf("%d", &marks[0]);

//     printf("enter chem : ");
//     scanf("%d", &marks[1]);

//     printf("enter math : ");
//     scanf("%d", &marks[2]);

//     printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);
//     return 0;
// }

// Q. WRITE A PROGRAM TO ENTER PRICE OF 3 ITEMS & PRINT THEIR FINAL COST WITH GST.

// int main()
// {
//     float price[3];
//     printf("enter item1 : ");
//     scanf("%f", &price[0]);

//     printf("enter item2 : ");
//     scanf("%f", &price[1]);

//     printf("enter item3 : ");
//     scanf("%f", &price[2]);

//     printf("total price 1 : %f\n", price[0] + (0.18* price[0]));
//     printf("total price 1 : %f\n", price[1] + (0.18* price[1]));
//     printf("total price 1 : %f\n", price[2] + (0.18* price[2]));
//     return 0;
// }

// Q. POINTER ARITHMETIC

// DIFFERENCE IS NOT BETWEEN NUMBERS BUT IN BETWEEN DATATYPE.

// int main()
// {
//     int age1 = 22;
//     int age2 = 23;
//     int *ptr1 = &age1;
//     int *ptr2 = &age2;

//     printf("%u,\n %u,\n difference = %u\n", ptr1, ptr2, ptr1 - ptr2);
//     ptr2 = &age1;
//     printf("comparison = %u\n", ptr1 == ptr2);
//     return 0;
// }

// Q. ARRAY IS POINTER

// int main()
// {
//     int aadhar[5];

//     // INPUT
//     // int *ptr = &aadhar[0]; we have to remove this comment for onther method.
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index : ", i);
//         scanf("%d", &aadhar[i]);  // scanf("%d", (ptr + i)); other method
//     }

//     // OUTPUT
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index = %d\n", i, aadhar[i]);  //printf("%d index = %d\n", i, *(ptr + i));
//     }
//     return 0;
// }

// EX. ARRAYS AS FUNCTION ARGUMENT

// void printNumber(int arr[], int n);

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumber(arr, 6);
//     return 0;
// }

// void printNumber(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// Q. WRITE A FUNCTION TO COUNT THE NUMBER OF ODD NUMBERS IN ARRAY.

// int countOdd(int arr[], int n);

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printf("%d", countOdd(arr, 6));
//     return 0;
// }

// int countOdd(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0) // odd
//         {
//             count++;
//         }
//     }
//     return count;
// }

// Q. WRITE A FUNCTION TO REVERSE AN ARRAY. not understand

// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     reverse(arr, 6);
//     printArr(arr,6);
//     return 0;
// }

// void printArr(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int n)
// {
//     for (int i = 0; i < n/2; i++)
//     {
//        int firstVal = arr[i];
//        int secondVal = arr[n-i-1];
//        arr[i] = secondVal;
//        arr[n-i-1] = firstVal;

//     }

// }

// Q. CREATE A 2D  ARRAY, STORING THE TABLES OF 2 & 3.

// STRING EXAMPLE

// void printString(char arr[]);

// int main()
// {
//     char firstname[] = "sahil";
//     char lastname[] = "kapadia";

//     printString(firstname);
//     printString(lastname);
//     return 0;
// }

// void printString(char arr[])
// {
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// Q. PRINT LENGTH AND NAME

// int countLength(char arr[]);

// int main()
// {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("length is :%d",countLength(name));
//     // char name[100] = "sahil";               //Ex. of strlen() function
//     // printf("length is :%d", strlen(name));
//     return 0;
// }

// int countLength(char arr[])
// {
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count - 1;
// }

// EXAMPLE OF strcpy() FUNCTION

// int main()
// {
//     char oldName[] = "aryan";
//     char newName[] = "sahil";
//     strcpy(newName, oldName);
//     puts(newName);
//     return 0;
// }

// EXAMPLE OF strcat() FUNCTION

// int main()
// {
//     char firstStr[100] = "sahil ";
//     char secondStr[] = "kapadia";
//     strcat(firstStr, secondStr);
//     puts(firstStr);
//     return 0;
// }

// EXAMPLE OF strcmp() FUNCTION

// int main()
// {
//     char firstStr[] = "sahil";
//     char secondStr[] = "kapadia";
//     printf("%d", strcmp(firstStr, secondStr));

// }

// EXAMPLE OF STRUCTURES FUNCTION

// USER

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main()
// {
//     struct student s1;
//     s1.roll = 54;
//     s1.cgpa = 9.2;
//     strcpy(s1.name,"sahil");

//     printf("student name = %s\n", s1.name);
//     printf("student roll no = %d\n", s1.roll);
//     printf("student name = %f\n", s1.cgpa);
//     return 0;
// }

// Q. PRINT ADD

// struct address
// {
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };

// void printAdd(struct address add);

// int main()
// {
//     struct address add[5];

//     printf("enter info for person 1 :");
//     scanf("%d", &add[0].houseNo);
//     scanf("%d", &add[0].block);
//     scanf("%s", &add[0].city);
//     scanf("%s", &add[0].state);

//     printf("enter info for person 2 :");
//     scanf("%d", &add[1].houseNo);
//     scanf("%d", &add[1].block);
//     scanf("%s", &add[1].city);
//     scanf("%s", &add[1].state);

//     printf("enter info for person 3 :");
//     scanf("%d", &add[2].houseNo);
//     scanf("%d", &add[2].block);
//     scanf("%s", &add[2].city);
//     scanf("%s", &add[2].state);

//     printf("enter info for person 4 :");
//     scanf("%d", &add[3].houseNo);
//     scanf("%d", &add[3].block);
//     scanf("%s", &add[3].city);
//     scanf("%s", &add[3].state);

//     printAdd(add[0]);
//     printAdd(add[1]);
//     printAdd(add[3]);
//     printAdd(add[4]);

//     return 0;
// }

// void printAdd(struct address add){
//     printf("address is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
// }

// PATTERN/\\\\\\\\\\\\\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\

// EX.1

// int main(){
//     int i,j,s;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             printf("* ");
//         }
//         // for (s = 1; s < i; s++)
//         // {
//         //    printf("*");
//         // }
//         printf("\n");
//     }

// EX.2 PYRAMID PATTERN

// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= 1; j--)
//         {
//             if (i >= j)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EX.3

// int main()
// {
//     int row = 5, col = 5;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == row)
//             {
//                 printf("* ");
//             }
//             else if (j == 1 || j == col)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// EX.4

// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     for (int i = n; i >=1 ; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EX.5

// int main()
// {
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j <= n - i)
//             {
//                 printf(" ");
//             }
//             else
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EX- SAME PATTERN BY USING FOR LOOP ONLY

// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  EX PATTERN WITH NUMBERS :------------

// [1]

// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         // for loop to print spaces before star pattern
//         for (int s = 1; s <= n - i; s++)
//         {
//             printf(" ");
//         }

//         // for loop to print star pattern
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", i);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// [2]

// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         // for loop to print spaces before star pattern
//         for (int s = 1; s <= n - i; s++)
//         {
//             printf(" ");
//         }

//         // for loop to print star pattern
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// EX OF FLOYD'S TRIANGLE

// int main()
// {
//     int n, count;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", count);
//             printf(" ");
//             count++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EX BUTTER FLY PATTERN

// int main()
// {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }

//         int space = 2 * n - 2 * i;
//         for (int s = 1; s <= space; s++)
//         {
//             printf("  ");
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }

//         int space = 2 * n - 2 * i;
//         for (int s = 1; s <= space; s++)
//         {
//             printf("  ");
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// EX.......

// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// EX.......

// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// EX.. RHOMBUS PATTERN AND ALSO PYRAMID PATTERN IS POSSIBLE TOO....

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter a value of N: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= n; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EX PYRAMID PATTERN WITH NUMBERS

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter a value of N: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EX PALINDROMIC PATTERN || DONE **********

// #include <stdio.h>

// int main()
// {
//     int n, i, j;

//     printf("Enter the number of lines: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         // Print spaces
//         for (j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }

//         // Print increasing numbers
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }

//         // Print decreasing numbers
//         for (j = i - 1; j >= 1; j--)
//         {
//             printf("%d", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// int main()
// {
//     int n;
//     printf("Enter a value of N: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = 0; s <= n - i; s++)
//         {
//             printf("  ");
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",j);
//             printf(" ");
//         }

//         for (int j = i-1; j >= 1; j++)
//         {
//             printf("%d",j);
//             printf(" ");
//         }

//         printf("\n");
//     }
//     return 0;
// }

// EX STAR PATTERN********************

// int main()
// {
//     int n;
//     printf("Enter a value of N: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             printf("  ");
//         }

//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             printf("  ");
//         }

//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EX ZIG ZAG PATTERN

// int main()
// {
//     int n;
//     printf("Enter the value of N :");
//     scanf("%d", &n);

//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (((i + j) % 4 == 0) || (i == 2 && j % 2 == 0))
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }

//         }
//         printf("\n");
//     }
//     return 0;
// }

// EX OF FLIP THE NUMBER

// int main()
// {
//     int n,r,flip;
//     printf("Enter the number : ");
//     scanf("%d",&n);

//     flip = 0;
//     while (n!=0)
//     {
//         r = n%10;
//         flip = flip*10 + r;
//         n = n/10;
//     }

//     printf("%d", flip);

//     return 0;
// }
