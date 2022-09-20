#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
// Hello World

/* This is a multiline code
 */
//* Data Stored in various variables
// int main() {
//     int no = 18;
//     printf("no is %d \n", no);
//     float e = 2.71;
//     printf("e is %f \n", e);
//     char something = '*' ;
//     printf("star is %c \n", something);
//     return 0;
// }

//* How to take input!

// int main(){
//     int age;
//     printf("Enter age");
//     scanf("%d", &age);
//     printf("age is : %d", age);
//     return 0;
// }

//* Small Example of Multiple Inputs

// int main(){
//     int a,b;
//     printf("a is");
//     scanf("%d", &a);

//     printf("b is");
//     scanf("%d", &b);

//     int sum = a+b;
//     printf("Sum is : %d" , sum);
//     return 0;

//* Eg-2
// int main(){
//     int a,b;
//     printf("a is");
//     scanf("%d", &a);

//     printf("b is");
//     scanf("%d", &b);

//     printf("Hey Sum is : %d", a+b);
//     return 0;
// }

//? How to Calculate Area of Square?

// int main(){
//     int side;
//     printf("Enter Side :");
//     scanf("%d" , &side);
//     printf("Area of the square is : %d" , side*side);
//     return 0;
// }

// int main(){
//     float side;
//     printf("Enter the side :");
//     scanf("%f" , &side);
//     printf("Area of the square is : %f", side*side);
//     return 0;
// }

//? How to Calculate Area of Circle?

// int main(){
//     float radius;
//     printf("What's the radius(enter in the integer :)!");
//     scanf("%f", &radius);
//     printf("The Area of the Circle is : %f", 3.14*radius*radius);
//     return 0;
// }

// int main(){
//     int x,y,z;
//     x=y=z=11;
//     printf("x/y/z = %d" , x);
//     return 0;
// }

// int main(){
//     int a=1,b=3 ;
//     int sum = a+b;
//     printf("Sum = %d", sum);
//     return 0;
// }

// int main(){

//* Power Func
// int b,c;
// b=3 , c =2;
// int power = pow(b,c);
// printf("%d" , power);
// return 0;

// int hello,world;
// hello = 1 , world=3;
// int combine_both = pow(world , world);
// printf("%d", combine_both * combine_both);
// return 0;

//? How To Use Modulo?
// printf("%d", 16%16);
// return 0;

//? Type Conversions?

// printf("%f \n" , 12.0/12.0);
// return 0;

//? Examples of Implicit and Explicit Functions!
// int a = (int)1.999999;
// printf("%d \n", a);
// return 0;

//? BODMAS!!
// int A = 4*3/6*7;
// printf("%d \n", A);
// return 0;

//? Examples of BDMAS...

// int A = 5*2-2*3;
// printf("%d \n", A);
// return 0;

// int B = 5*2/2*3;
// printf("%d \n", B);
// return 0;

// int C = 5*(2/2)*4;
// printf("%d \n", C);
// return 0;

// int D = 5+2/2*3;
// printf("%d \n" , D);
// return 0;

//? Relational Operators::

// printf("%d \n" , 3<2);
// printf("%d \n", 4!=4);
// printf("%d \n" , 6>8 && 8>7);
// printf("%d \n", 9>8 || 7>8);
// printf ("%d \n", !(1>2));

// printf("%d \n", !((5>2) && (5>6)));

//? Assisgnment Operator!!
// int a = 3;
// int b = 4;
// a += b; // a = a+b
// a -= b; // a = a-b
// a *= b; // a = a*b
// a /= b; // a= a/b
// printf("%d \n", a);

//? Program TO Check if the entered No is Divisible by 2(or if the no is Even/Odd)!!
// int x;
// printf("Enter a Number : ");
// scanf("%d" , &x);
// printf("%d \n" , x % 2 == 0);

// int a = 8;
// int b = 2;
// a = pow(a,b);
// printf("%d \n", a);

// int is_Monday = 1;
// int is_Snowing = 0;
// printf("%d \n" , is_Monday || is_Snowing);

//? If the no is greater than 9 and less than 100 (or) check if the no is 2 digit or not?
// int y;
// /*(1 : if no entered is greater than 9 and less than 100 (or) if the no entered is 2 digit no!
// 0 : Otherwise*/

// printf("Please enter a number : ");
// scanf("%d" , &y);
// printf("%d \n", y>9 && y<100);

// Project 1:  //? Program to write the average off the 3 numbers?//
// int main()
// {
//     int x, y, z;
//     printf("Enter the first Number : ");
//     scanf("%d", &x);
//     printf("Enter the second Number : ");
//     scanf("%d", &y);
//     printf("Enter the third Number : ");
//     scanf("%d", &z);
//     printf("%d \n", (x + y + z) / 3);
// }

//? If,else,else-if Check //
// int age;
// printf("Hello! Please Enter the age : ");
// scanf("%d", &age);
// if(age >= 18) {
//     printf("You are an Adult!! \n");
//     printf("Valid for Vote! \n") ;
//     printf("Valid for Driving \n");
// }
// else if (age > 13 && age < 18)
// {printf("Teenager!! \n");
// }
// else{
//     printf("Chotti Bachchi Ho Kya!! \n");
// }
// printf("Hatt Besharam!! \n");

// int age;
// printf("Enter age : ");
// scanf("%d" , &age);

// Ternary Operator;

// age <= 18 ? printf("Child") : printf("Adult");

//? SWITCH //?

// char day; //m-Monday , o-Tuesday , w- Wednesday .......
// printf("Enter a No(m-f and press o for Lucky Day! :) )");
// scanf("%s", &day);

// switch (day) {
//     case 'm' : printf("Monday \n");
//             break;
//     case 'o' : printf("Tuesday \n");
//             break;
//     case 'w' : printf("Wednesday \n");
//             break;
//     case 't' : printf("Thursday \n");
//             break;
//     case 'f' : printf("Friday \n");
//             break;

//     default : printf("Get Lost!!");

// }

//? Something about Nested if-else!
// int number;
// printf("Enter the Number : ");
// scanf("%d" , &number);

// if(number >= 0) {
//     printf("Positive \n");
//     if(number % 2 == 0) {
//         printf("Number is Even or Divisible by 2 \n");
//     }
//     else {
//         printf("Better Luck next time as no is odd or negative! \n");}
// }

//? Project : Pass/Fail Calculate!
// int marks;
// printf("Enter Marks! : ");
// scanf("%d", &marks);
// if(marks >= 0 && marks <= 30 ){
//     printf("Fail \n");}
// else if (marks > 30 && marks <= 100){
//     printf("PASS!!");
// }
// else{
//     printf("Ghar Jao");
// }

//? Grade Calculator //?

// int marks;
// printf("Good Morning! \n");
// printf("Enter the marks of the student : ");
// scanf("%d", &marks);
// if(marks <= 30){
//     printf("NA");
// }
// else if (marks >= 30 && marks <=70){
//     printf("B \n");
// }
// else if (marks >= 70 && marks <= 91){
//     printf("A \n");
// }
// else{
//     printf("A+ Congrats Champ!");
// }

//? Finding if the alphabet entered is Upper Case or Lower Case!! //?
// char alphabet;
// printf("Enter an alphabet : \n");
// scanf("%c", &alphabet);
// int main(){
//     if (alphabet >= 'A' && alphabet <= 'Z')
// {
//     printf("Upper Case");
// }
// else if (alphabet >= 'a' && alphabet <= 'z')
// {
//     printf("Lower Case");
// }
// else
// {
//     printf("Not a Valid InPut");
// }
// }

//? For, While or do while loops!//?

// for(int i = 1; i<=10; i = i + 1){
// printf("%d \n", i);
// }

// for(int i = 0; i <= 3; i = i += 1){
//     printf("%d\n",i);
// }

// for(int i = 1 ; i <= 10 ; i += 1 ){
//     printf("Hello world \n");
// }

//? Print the numbers from 0-10 //?

// for(int i = 0 ; i <= 10 ; i+=1){
//     printf("%d \n" , i);
// }

//* Here , we can use i++ instead of i += 1 or i = i+1

//? Something about Increment and Decrement Operators  //?

// int main()
// {
// int i = 1;
// printf("%d \n", i++);
// printf("%d \n", i); //! Post-Increment Factor

// int i = 2;
// printf("%d \n", ++i); //! Pre-Increment Factor

// int i = 3;
// printf("%d \n", i--); //! Post-Decrement Factor

// int i = 3;
// printf("%d \n", --i); //! Pre-Decrement Factor
// }

//? Float or Character can also be used in for  loops !! // ?
// for(float i = 1.0000 ; i <= 10 ; i++){
//     printf("%f \n" , i);
//     printf("Voila! \n");
// }
// int main()
// {
//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         printf("%c \n", ch);
//     }
// }
    //? While Loops!! //?

    // int i = 1;
    // while(i <= 5){
    //     printf("Hello Earth!! \n ");
    //     i++ ;
    // }

    // float i = 5.00;
    // while(i <= 5){
    //     printf("%f \n" , i);
    //     i++;
    // }

    // char emoji = 1;
    // while( emoji <= 5){
    //     printf("%c\n" , emoji);
    //     emoji++;
    // }

    //? Print the numbers from 0 to n , if n is provided by the user //?
    // int n;
    // printf("Enter the value of n : ");
    // scanf("%d", &n);

    // int i = 0;
    // while(i <= n){
    //     printf("%d \n" , i);
    //     i++;
    // }

    // for(int i = 0 ; i <= n ; i++){
    //     printf("%d \n", i);}

    //? While Loops! //?

    // int i = 5;
    // do{
    //     printf("%d \n" , i);
    //     i--;
    // }while(i >= 1);

    //? Sum of Values for given value of n and print them in backward als!! ;
    // int n;
    // printf("Enter a value of n :");
    // scanf("%d", &n);
    // int sum = 0;
    // for(int i = 1 , j = n ; i <= n , j>= 1 ; i++, j--) {
    //     sum += j; printf("%d \n" , j);
    // }
    // printf("Sum is : %d \n" , sum);

    // for(int i = n; i>= 1 ; i--) {
    //     printf("%d \n", i);
    // }

    //? Print the table of the no input by the user...//?

    // int n;
    // printf("Enter a no man!! : ");
    // scanf("%d" , &n);

    // for(int i = 1 ; i <= 10 ; i++){
    //     printf("%d \n" , n*i);
    // }

    //? Something About Break Statement!! //?

    // int n; char name;
    // printf("Your Good Name's first Alpha :");
    // scanf("%s", &name);
    // printf("Enter a value of n , %s : ");
    // scanf("%d" , &k);
    // for(int i = 1 ; i<= k ; i++){
    //     if(i==k-2){
    //         break;
    //     }
    //     printf("%d \n" , i);
    // }
    // printf("End \n");

    // ................................................//

    // do {
    //     printf("Enter a No : ");
    //     scanf("%d" , &n);
    //     printf("%d \n" , n);

    //     if(n % 2 != 0) {
    //         printf("Opps! Its an odd number! *_* \n");
    //         break;

    //     }

    // }while(1);
    // printf("Thank You! \n");

    //! ...................................//

    //? Program to check if the number entered is multiple of 7  or not //?
    // do {
    //     printf("Enter a no : ");
    //     scanf("%d" , &n);
    //     printf("No is %d \n" , n);

    //     if( n % 7 != 0){
    //         printf("Program Terminated as number entered is not multiple of 7 \n");
    //         break;
    //     }
    // }while (1);
    // printf("Thanks!");

    //! ..................................//

    //? How to use Continue; //?
    // char name;
    // printf("Name(1st Alphabet Only) : ");
    // scanf("%s", &name);
    // printf("Your name is %s. \n");
    // int n;
    // for(int i = 1 ; i <= 10 ; i++){
    //     if(i == 6){
    //         printf("n-1 Skipped\n");
    //         continue;
    //     }
    //     printf("%d \n" , i);
    // }

    // printf("Thanks a ton!");

    //! .......................... //

    //? Print only the odd numbers from n to n*s ('s' is number of choice!) //?
    // int n;
    // printf("Enter a number : ");
    // scanf("%d" , &n);
    // for(int i = 0; i <= n*10 ; i++){
    //     if(i % 2 != 0){
    //         printf("%d \n" , i);
    //         continue;

    //     }
    // }

    //! ................................. //

    //? Print the factorial of the number //?

    // int n;
    // printf("Enter a number : ");
    // scanf("%d" , &n);
    // int factorial = 1;
    // for(int i = 1 ; i <= n ; i++){
    //     factorial = factorial*i;

    // }
    // printf("%d" , factorial);

    //! .................................. //

    //? How to Print table of 'n' in reverse
    // int k;
    // printf("Enter the value of k : ");
    // scanf("%d", &k);

    // for(int i = 10 ; i >= 1 ; i--) {
    //     printf("%d \n" , k*i);
    // }

    //! .........................................//

    //? Sum of all the numbers between 5 & 50(also include the extremes!) //?

    // int n; int sum=0;
    // for(int i = 5 ; i <= 50 ; i++){
    //     sum += i;

    // }printf("Sum is : %d \n" ,sum);

    //? Func Use //?

    int n;
    //! void printhello(); (Traditional Way to express func !!) //
    /* void printhello(){
        printf("Enter your name : ");
        scanf("%s" , &n);
        printf("Your Name is %s");
    }

    int main() {
        printhello();
        return 0;
    } */
    //*  Modern Way to use func :) //

    //! Traditional Way to express func ;) //
    // void printhello(){
    //     printf("Hello");
    // }

    //? Eg:1 //
    // void printhello(){
    //     printf("Hello!\n");
    // }

    // void printbye(){
    //     printf("Bye!\nHave a nice day!!");
    // }
    // int main(){

    //     printhello();
    //     printbye();
    //     return 0;
    // }

    //? Eg:2 //?

    //? To check the nationality of user!! //?

    // void namaste();//{
    // printf("Namaste\n");
    // bonjour();
    // }
    // void bonjour();//{
    //     printf("Bonjour \n");
    // }

    // int main(){
    //     printf("Enter i for Indian or f for French : ");
    //     char ch;
    //     scanf("%c",&ch);

    //     namaste();

    // if( ch == 'i') {
    //     namaste();
    // }
    // else{
    //     bonjour();
    // }

    // return 0;

    // }

    // void namaste(){
    //     printf("Namaste\n");
    //     bonjour();}

    // void bonjour(){
    //     printf("Bonjour \n");
    // }

    //? Parameters and Return Value //?

    //! Important!!! //

    //? Mini - Calculator Type of Thing!! //
    // int sum(int a , int b){
    //     return a+b;
    // }
    // int main(){
    //     int a,b;
    //     printf("Enter the first number : ");
    //     scanf("%d", &a);
    //     printf("Enter the second number : ");
    //     scanf("%d", &b);
    //     int s = sum(a,b);
    //     printf("Sum is equal to : %d\n" , s);
    //     return 0;
    // }

    //! Important //! ........

    // int product(int a, int b){
    //     return a*b;
    // }
    // int main(){
    //     int a,b;
    //     printf("Enter a number :\n");
    //     scanf("%d",&a);
    //     printf("Enter a second number :\n");
    //     scanf("%d",&b);

    //     int p = product(a,b);
    //     printf("Product is %d" , p);
    //     return 0;
    // }

    //! Important !! //

    //? To print the table of n!! //?

    // void printtable(int n){//? Parameter/formal parameter //
    //     for( int i = 1 ; i <= 10 ; i++){
    //         printf("%d\n", n*i);
    //     }
    // }

    // int main(){
    //     int n;
    //     printf("Enter a value of n :");
    //     scanf("%d", &n);

    //     printtable(n); //? The value of n that is input goes to int 'n'.... This 'n' is argument or actual parameter) //?
    //     return 0;
    // }

    //? How to calculate Selling Value of the item //?
    // void sp(float value){
    //     value = value + (0.18*value);
    //     printf("The item sp is : %f \n" , value);
    // }

    // int main(){
    //     float value = 100.0;
    //     sp(value);
    //     return 0;
    // }

    //? Use of Library functions to calculate square of number input by the user //?

    // int sum(int b,int a,int c,int d){
    //     b= b*b;
    //     printf("Value of the square of number entered is : %d \n" , b);
    //     return ((a+b)*c)/(d);
    // }
    // int main(){
    //     int n; int a; int c; int d;
    //     printf("Enter a number (b) : ");
    //     scanf("%d", &n);
    //     printf("Value that is to be added (a) : ");
    //     scanf("%d", &a);
    //     printf("Lets have fun that is to be multiplied (c) :");
    //     scanf("%d", &c);
    //     printf("Dil maange more! Promice Last!!\nEnter the value of no, by which the final value be divided by : ");
    //     scanf("%d", &d);
    //     int s = sum(n,a,c,d);
    //     printf("Final Value : %d\n",s);
    //     return 0;// }

    //? Method - 2;
    // void square(float n,float a){
    //     printf("%f" ,pow(n,a));

    // }

    // int main(){
    //     float n; float a;
    //     printf("Enter n : ");
    //     scanf("%f" , &n);
    //     printf("Power of the no : ");
    //     scanf("%f" , &a);
    //     square(n,a);
    // }

    // int area(float a ,float b , float c, float d){ // sq = a ,circle = b , rect = c
    //     printf("Area of square is : %f\n" , a*a);
    //     printf("Area of circle is : %f\n" , 3.14*b*b);
    //     printf("Area of rectangle is :  %f\n" , c*d);
    // }
    // int main(){ float a,b,c,d;
    //     printf("Side of square : ");
    //     scanf("%f" , &a);
    //     printf("Radius of circle : ");
    //     scanf("%f" , &b);
    //     printf("Length of Rect : ");
    //     scanf("%f" , &c);
    //     printf("Breadth of Rect : ");
    //     scanf("%f" , &d);
    //     area(a,b,c,d);
    //     return 0;

    // }

    //? Recursions.... //?

    // int sum(int n){
    //     if(n == 1){
    //         return 1;
    //     }
    //     int sumnm1 = sum(n-1);
    //     int sumn = sumnm1 + n;
    //     return sumn;
    // }
    // int main(){
    //     printf("Enter a value : ");
    //     scanf("%d" , &n);
    //     printf("The Sum is : %d" ,sum(n));
    //     return 0;
    // }
    //? Find the value of factorial of given number by recursion //?
    // int fact(int n){
    //     if(n == 0){
    //         return 1;
    //     }
    //     int factnm1 = fact(n-1);
    //     int factn = factnm1 * n;
    //     return factn;
    // }
    // int main(){
    //     printf("Enter a value :");
    //     scanf("%d", &n);
    //     printf("Value of fact : %d \n",fact(n));
    //     return 0;

    // }

    //? To convert Ferhenheit to Celcius //?
    // float temp(float n){
    //     float f = n * 0.18 + 32 ;
    //     return f;

    // }

    // int main(){float n;
    //     printf("Enter n : ");
    //     scanf("%f", &n);
    //     printf("The value of temp is : %f", temp(n));
    //     return 0;

    // }

    //? Calculate Marks!! //?
    // int marks(int sanskrit , int math , int science){
    //     return ((sanskrit + math + science) / 3);

    // }

    // int main() {int sanskrit,math,science;
    //     printf("Enter marks of sanskrit : ");
    //     scanf("%d", &sanskrit);
    //     printf("Enter marks of math : ");
    //     scanf("%d", &math);
    //     printf("Enter marks of science : ");
    //     scanf("%d", &science);
    //     printf("Total Percentage : %d \n", marks(sanskrit,math,science));
    //     return 0;

    // }

    //? Fibonacci Series //?
    // int fibo(int n) {
    //     if(n == 1) {
    //         return 1;
    //     }
    //     if(n == 0){
    //         return 0;
    //     }
    //     int fibonm2 = fibo(n-2);
    //     int fibonm1 = fibo(n-1);
    //     int fibon = fibonm1 + fibonm2;
    //     return fibon;
    // }

    // int main(){int n;
    //     printf("Enter a value : ");
    //     scanf("%d", &n);
    //     printf("The Fibonacci is : %d\n" ,  fibo(n));
    // }

    //! Pointers Important //!
    // int main(){
    //     int plot = 18;
    //     int *ptr = &plot;

    //     printf("%d\n", plot);

    //     printf("%d\n", *ptr);

    //     printf("%d\n", *(&plot));
    //     return 0;
    // }

    // int main(){
    //     int x;
    //     int *ptr;

    //     ptr = &x;
    //     *ptr = 0;

    //     printf("x is %d\n", x);
    //     printf("*ptr is %d\n", *ptr);

    //     *ptr += 5;
    //     printf("x is %d\n", x);
    //     printf("*ptr is %d\n", *ptr);

    //     (*ptr)++;
    //     printf("x is %d\n", x);
    //     printf("*ptr is %d\n", *ptr);

    //     return 0;
    // }

    //? Value of i from its pointer to pointer!!
    // int main(){
    //     int i=5;
    //     int *ptr = &i;
    //     int **pptr = &ptr;
    //     printf("Value of i : %p" , **pptr);
    //     return 0;

    //}

    //? Call by Reference //?

    // void star(int n){
    //     n = n*n;
    //     printf("Value of star is %d\n",n);
    // }

    // void _star(int *n){
    //     (*n) = (*n) * (*n);
    //     printf("The Value of _star is %d\n",*n);
    // }

    // int main(){
    //     int n = 2;
    //     star(n);
    //     printf("The value of n is %d\n",n);

    //     _star(&n);
    //     printf("The value of n is %d\n", n);
    //     return 0;

    // }

    //! ..................... //!
    // void swap(int a, int b){
    //     int t = a;
    //     a = b;
    //     b =t;
    //     printf("Value of a is : %d and Value of b is %d \n", a,b);

    // }

    // Call by Reference!! For multiple values !!
    // void _swap(int *a,int *b){
    //     int t = *a;
    //}     *a = *b;
    //}     *b = t;
    //     printf("Value of a is : %d and value of b : %d\n", a,b);

    // }
    // int main(){
    //     int x = 5; int y = 8;
    // swap(x,y);
    // printf("Value of x is %d & Value of y is %d \n", x,y);

    //     _swap(&x,&y);
    //     printf("Value of x is : %d and value of y is : %d\n", x, y);
    //     return 0;
    // }

    //! Example of Call by Value !! So address gets changed!!
    // void address(int n){
    //     printf("%u\n", &n);
    // }

    // int main(){
    //     int n = 4;
    //     address(n);
    //     printf("%u\n", &n);
    //     return 0;
    // }

    //? If Call by Reference is used the address gets changed !!

    // void address(int *n){
    //     printf("%u\n",n);
    // }

    // int main(){
    //     int n = 4;
    //     address(&n);
    //     printf("%u\n", &n);
    //     return 0;
    // }

    //? To find the sum,prod,avg of three values //?

    // void dowork(int a, int b, int *sum , int *prod , int *avg){
    //     *sum = a + b;
    //     *prod = a*b;
    //     *avg = (a+b)/2;
    // }
    // int main() {
    //     int a = 3, b = 5 ;
    //     int sum ,prod, avg;
    //     dowork(a, b, &sum, &prod, &avg);
    //     printf("Sum is %d , prod is %d, avg is %d" ,sum,prod,avg);
    //     return 0;
    // }

    //! ARRAYS //!

    // int main() {
    //     float price[3];
    //     printf("Enter a value of 1st Item : ");
    //     scanf("%f", &price[0]);
    //     printf("Enter a value of 2nd Item :");
    //     scanf("%f", &price[1]);
    //     printf("Enter a value of 3rd Item :");
    //     scanf("%f", &price[2]);

    //     printf("Total Cost of 1 is : is %f\n" , price[0] + (price[0]*0.18));
    //     printf("Total Cost of 2 is: is %f\n" ,  price[1] + (price[1]*0.18));
    //     printf("Total Cost of 3 is : is %f\n" , price[2] + (price[2]*0.18));
    //     return 0;
    // }

    //! Pointers Increment and Decrement //!

    // int main(){
    //     int a = 22;
    //     int *ptr = &a;
    //     printf("Value : %u\n", ptr);
    //     ptr++;
    //     printf("Value new : %u\n" , ptr);
    //     ptr--;
    //     printf("Value new new : %u\n" , ptr);
    //     return 0;
    // }

    // int main(){
    //     float age = 18.000;
    //     float *ptr = &age;
    //     printf("Value : %u\n", ptr);
    //     ptr ++; // ptr = ptr + 1 // +1 means the memory gets increased by the size of float or char or int //
    //     printf("Value new : %u\n", ptr);
    //     ptr--;
    //     printf("Value new new : %u\n", ptr); //? Float takes 4 bytes....// int takes 4 and char takes 1 //?
    // }

    // int main(){
    //     char star = '*';
    //     char *ptr = &star;
    //     printf("Value : %u\n", ptr);
    //     ptr ++; // ptr = ptr + 1 // +1 means the memory gets increased by the size of float or char or int //
    //     printf("Value new : %u\n", ptr);
    //     ptr--;
    //     printf("Value new new : %u\n", ptr); //? Float takes 4 bytes....// int takes 4 and char takes 1 //?
    // }

    // int main(){
    //     int age = 23;
    //     int _age = 100;
    //     int *ptr = &age;
    //     int *_ptr = &_age;
    //     printf("Value of ptr : %u\n" ,ptr);
    //     printf("Value of _ptr : %u\n" , _ptr);
    //     printf("Difference is : %u\n", ptr-_ptr);//? Would Print 1 means difference of 4 bytes or different if char or float is used //?
    //     _ptr = &age;
    //     printf("Comparison is : %u\n", ptr==_ptr);
    //     return 0;
    // }

    //! Important Example !!
    // int main(){
    //     int aadhar[5];
    //     */ Input

    //     int *ptr = &aadhar[0];
    //     for (int i = 0 ; i < 5; i++) {
    //         printf("%dth entry :\n", i);
    //         scanf("%u" , &aadhar[i]);
    //     }

    //     */Output
    //     for(int i = 0 ; i < 5 ; i++) {
    //         printf("%dth Entry is :%u\n" , i, aadhar[i]);

    //     }
    //     return 0;
    // }

    //! ........................................... //!

    // void printnumbers(int arr[], int n) {
    //     for(int i = 0 ; i < n ; i ++){
    //         printf("%u\t " , arr[i]);
    //     }
    // }

    // int main(){
    //     int arr[] ={1,2,3,4,5,6};
    //     printnumbers(arr,6);
    //     return 0;

    // }

    // int main() {
    //     int arr[2][3] = {{98,97,99},{12,45,99}};
    //     printf("%d\n" , arr[1][0]);
    //     return 0;

    // }

    //? No of Odd Numbers in an array //?
    // int countodd(int arr[], int n) {
    //     int count = 0;
    //     for(int i = 0; i < n ; i++){
    //         if(arr[i] % 2 != 0) {
    //             count++;
    //         }
    //     } return count++;
    // }

    // int main(){
    //     int arr[] = {1,2,3,4,5,6};
    //     printf("No of Odd numbers are  : %d" , countodd(arr, 6));

    //     return 0;
    // }

    //? No of Even Numbers //?
    // int counteven(int arr[], int n)
    // {
    //     int count = 0; //* Intially count = 0 as initially 0 odd numbers!!
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] % 2 == 0)
    //         {
    //             count++;
    //         }
    //     }
    //     return count++;
    // }
    // int main()
    // {
    //     int arr[] = {1, 2, 0, 4, 5, 6};
    //     printf("No of even numbers are : %d", counteven(arr, 6));
    //     return 0;
    // }

    //?  Eg : 3;

    // int main()
    // {
    //     int arr[] = {1, 2, 3, 4, 5};
    //     printf("Enter the value of : %u\n", *(arr + 2));
    //     printf("Enter the value of : %u\n", *(arr + 5));
    //     return 0;
    // }

    //? Reverse an array !! //?

    // void reverse(int arr[], int n)
    // {
    //     for (int i = 0; i < n / 2; i++)
    //     {
    //         int firstval = arr[i];
    //         int secondval = arr[n - i - 1];
    //         arr[i] = secondval;
    //         arr[n - i - 1] = firstval ;

    //     }
    // }

    // void printarr(int arr[], int n)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%d\t", arr[i]);
    //     }
    //     printf("\n");
    // }

    // int main()
    // {
    //     int arr[] = {1, 2, 3, 4, 5};
    //     reverse(arr, 5);
    //     printarr(arr, 5);
    //     return 0;
    // }

    //? To print the first n fibonacci numbers //?

    // int main()
    // {
    //     int fib[n];
    //     fib[0] = 0;
    //     fib[1] = 1;
    //     int n;
    //     printf("Enter the value :", n);
    //     scanf("%d", &n);
    //     for (int i = 2; i < n; i++)
    //     {
    //         fib[i] = fib[i - 1] + fib[i - 2];
    //         printf("%d\t", fib[i]);
    //     }
    //     printf("\n");
    //     return 0;
    // }

    //! Important Exammple !!

    // void storetables(int arr[][10], int n, int m, int number)
    // { // n is row ; m is column
    //     for (int i = 0; i < m; i++)
    //     {
    //         arr[n][i] = number * (i + 1);
    //     }
    // }
    // int main()
    // {
    //     int tables[2][10];
    //     int y, z;
    //     printf("Enter the value of 1st Number :");
    //     scanf("%d", &y);
    //     printf("Enter the value of second number :");
    //     scanf("%d", &z);
    //     storetables(tables, 0, 10, y);
    //     storetables(tables, 1, 10, z);

    //     for (int i = 0; i < 10; i++)
    //     {
    //         printf("%d\t", tables[0][i]);
    //     }
    //     printf("\n");
    //     for (int i = 0; i < 10; i++)
    //     {
    //         printf("%d\t", tables[1][i]);
    //     }
    //     printf("\n");
    //     return 0;
    // }

    //? To print the first and last name of a person //?
    // void printname(char arr[])
    // {
    //     for (int i = 0; arr[i] != '\0'; i++)
    //     {
    //         printf("%c", arr[i]);
    //     }
    //     printf("\n");
    // }

    // int main()
    // {
    //     char firstname[] = "Aarav";
    //     char lastname[] = "Mahajan";

    //     printname(firstname);
    //     printname(lastname);
    //     return 0;
    // }

    //? Practice //?

    // void name(char arr[])
    // {
    //     for (int i = 0; arr[i] != '\0'; i++)
    //     {
    //         printf("%c", arr[i]);
    //     }
    //     printf("\n");
    // }

    // int main()
    // {

    //     char firstname[] = "Raghu";
    //     char lastname[] = "Mahajan";

    //     name(firstname);
    //     name(lastname);
    // }

    // int main(){
    //     char name[50];
    //     printf("Enter you name : ");
    //     scanf("%s" , name);
    //     printf("Your name is : %s", name);
    //     return 0;
    // }

    //? First name and last name //?
    // int main()
    // {
    //     char firstname[50];
    //     char lastname[100];

    //     printf("Enter first name :");
    //     scanf("%s", firstname);
    //     printf("Enter last name : ");
    //     scanf("%s", lastname);
    //     return 0;
    // }

    //! Important Property //?
    //* scanf cannot take values wriiten after one word with space in between //

    // int main()
    // {
    //     char fullname[100];
    //     printf("Enter your name : ");
    //     scanf("%s", fullname);
    //     printf("Your full name is : %s", fullname);
    //     return 0;
    // }

    // int main()
    // {
    //     char str[100];
    //     printf("Enter your name :");
    //     fgets(str, 100, stdin);

    //     printf("Your name is :");
    //     puts(str);

    //     return 0;
    //

    // int main() {
    //     char name[10] = "Aarav";
    //     // printf("Enter your name:");
    //     // fgets(name, 10, stdin);
    //     int length = strlen(name);
    //     printf("Length of name is : %d" , length);
    //     return 0;
    // }

    // int main() {
    //   char yourname[100];
    //   printf("Enter your name :");
    //   fgets(yourname, 100, stdin);
    //   // int length = strlen(yourname);
    //   printf("Length of name is %lu" , strlen(yourname)-1);
    //   return 0;
    // }

    //? Use of Strcpy //?

    // int main(){
    //   char age[] = "22";
    //   char newage[] ="23";
    //   strcpy(newage,age);
    //   puts(newage); //copies the value of old entered age to newage !!
    // }

    // Strcat is awesome :)

    // int main(){
    //   char hello[] = "Hello ";
    //   char world[] = "world";
    //   strcat(hello,world);
    //   puts(hello);
    // }

    //! Use of strcmp library functions!!
    // int main()
    // {//? 1st string - 2nd string ASCII Values!!
    //     char fruit1[] = "HHHHK";
    //     char fruit2[] = "HHHHJ";
    //     printf("%d", strcmp(fruit1, fruit2));
    //     return 0;
    // }

    //? Take input from user until he presses enter key //?

    // int main() {
    //     char str[100];
    //     char ch;
    //     int i = 0;
    //     printf("Enter the message : ");
    //     while(ch != '\n') {
    //         scanf("%c", &ch);
    //         str[i]= ch;
    //         i++;
    //     }str[i] = '\0'; // to show it is a string
    //     puts(str);
    //     return 0;
    // }

    // int main(){
    //     char anything[100];
    //     char ch;
    //     int i = 0;
    //     printf("Enter anything :");
    //     while(ch != '\n') {
    //         scanf("%c" ,&ch);
    //         anything[i] = ch;
    //         i++;
    //     } anything[i] = '\0';
    //     puts(anything);
    //     return 0;
    // }

    //? Salting !!

    // void salting(char password[]){
    //     char salt[100000] = "hqhkjfhjkfsadkjfjkah33iuu891idsadjknckjk@KJkjdjkdkja&Bjdbfjdbajbj";
    //     char extrasalt[100000] = "dsafjkhkshkj^sdajkjk!@*(&*(@IHqhdjkhdkjahfjkh98U(U*(((!#@(";
    //     char newpassword[100000];
    //     char ultrasecurepassword[100000];
    //     strcpy(newpassword, password);
    //     strcat(extrasalt , newpassword);
    //     strcpy(ultrasecurepassword , newpassword);
    //     strcat(ultrasecurepassword , salt);
    //     puts(ultrasecurepassword);
    // }

    // int main(){
    //     char password[100000];
    //     printf("Enter your password : ");
    //     scanf("%s",password);
    //     salting(password);
    //     return 0;
    // }

    //! Concept of slicing //!
    //? Important Example //?

    // void slice(char str[], int n, int m)
    // {
    //     char newstr[100];
    //     int j = 0;
    //     for (int i = n; i <= m; i++, j++)
    //     {
    //         newstr[j] = str[i];//! Important concept!! //!
    //     }
    //     newstr[j] = '\0';
    //     puts(newstr);
    // }

    // int main()
    // {
    //     char str[100];
    //     printf("Enter the word(without space) : ");
    //     scanf("%s", str);
    //     slice(str, 3, 6);
    //     return 0;
    // }

    //? To count the number of vowels and consonants in the word //?

    // int countvowels(char str[]){
    //     int count=0 ;
    //     for (int i = 0; str[i] != '\0'; i++){
    //         if(str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] == 'o' || str[i] =='u') {
    //             count++;
    //         }

    //     }return count;
    // }

    // int main(){
    //     char str[100];
    //     printf("Enter a word :");
    //     scanf("%s",str);
    //     printf("The no. of vowels in the word are : %d\n", countvowels(str));
    //     printf("The  no. of consonants in the word are : %d\n", strlen(str)-countvowels(str));
    //     return 0;
    // }

    //? To check whether a particular character is present or not//?

    // void avail(char str[],char ch){
    //     for (int i = 0; str[i] != 0; i++){
    //         if(str[i] == ch){
    //             printf("Yes\t");
    //             return;
    //         }
    //     }printf("Character is not present :( ");

    // }

    // int main(){
    //     char str[] = "helloworldhowareyou?";
    //     char ch = ' '; // Space is also a character :)
    //     avail(str,ch);
    //     return 0;
    // }

    //! Struct user-defined //!

    // struct student
    // {
    //     int rollno;
    //     float cgpa;
    //     char name[100];
    // };

    // int main()
    // {
    //     char name[100];
    //     printf("Enter your name : ");
    //     fgets(name, 100, stdin);
    //     struct student s1;
    //     s1.rollno = 1664;
    //     s1.cgpa = 10;
    //     strcpy(s1.name, name);
    //     printf("Name : %s\t", s1.name);
    //     printf("Roll No :%d\t", s1.rollno);
    //     printf("CGPA :%f\t", s1.cgpa);
    //     return 0;
    // }

    //! Struct uses  //!

    // struct student
    // {
    //     char name[100];
    //     int rollno;
    //     float cgpa;
    // };

    // int main()
    // {
    //     struct student ece[100];
    //     ece[0].rollno;
    //     ece[0].cgpa;
    //     char name[100];
    //     printf("Enter Name : ");
    //     fgets(name, 100, stdin);
    //     strcpy(ece[0].name, name);
    //     printf("Roll No. : ");
    //     scanf("%d", &ece[0].rollno);
    //     printf("CGPA:");
    //     scanf("%f", &ece[0].cgpa);
    //     printf("Name : %s\t", ece[0].name);
    //     printf("Roll No : %d\t", ece[0].rollno);
    //     printf("CGPA : %f\t", ece[0].cgpa);
    //     return 0;
    // }

    //! If we know the values already !! //?

    // struct studentdetails{
    //     char name[100];
    //     int rollno;
    //     float cgpa;
    // }; //! Important to use ; after defining 'struct' !!

    // int main(){
    //     struct studentdetails s1 = {"Aarav",1,10};
    //     printf("Name : %s" ,s1.name);

    //     struct studentdetails *ptr = &s1 ;
    //     printf("Roll No. = %d\n", (*ptr).rollno);
    //     return 0;
    // }

    //? Arrow Operator //?

    // struct studentdetails{
    //     char name[100];
    //     int rollno;
    //     float cgpa;
    // };
    // int main(){
    //     struct studentdetails s1 = {"Aarav",1,10};
    //     //* printf("Name : %s\t" ,s1.name);

    //     struct studentdetails *ptr = &s1 ;
    //     printf("Name = %s\t" , ptr->name);
    //     printf("Roll No. = %d\t", ptr->rollno);
    //     printf("CGPA = %f\t" , ptr->cgpa);
    //     return 0;
    // }

    //? To pass on the value to function in struct //?
    // struct student {
    //     char name[100];
    //     int rollno;
    //     float cgpa;
    // };

    // void printinfo(struct student s1) {
    //     printf("Student info : \n");
    //     printf("Name = %s\t", s1.name);
    //     printf("Roll No. = %d\t" , s1.rollno);
    //     printf("CGPA = %f\n" , s1.cgpa);
    //     if(s1.cgpa <= 9){
    //         printf("You need to improve!!\n");
    //     }
    //     else{
    //         printf("You are on the right track!\n");
    //     }
    // }

    // int main(){
    //     struct student s1;
    //     char name[100];
    //     printf("Enter name :");
    //     scanf("%s" , name);
    //     strcpy(s1.name , name);
    //     printf("Rollno : ");
    //     scanf("%d", &s1.rollno);
    //     printf("CGPA :");
    //     scanf("%f" , &s1.cgpa);
    //     printinfo(s1);
    //     return 0;

    // }

    //! typedef func //!

    // typedef struct ComputerEngeeringStudent {
    //     char name[100];
    //     int rollno;
    //     float cgpa;
    // }coe;

    // int main(){
    //     coe student1 = {"Aarav",1,10};
    //     printf("Name = %s" , student1.name);
    //     return 0;

    // }

    //? Eg 4;
    // typedef struct address
    // {
    //     int houseno;
    //     int block;
    //     char city[100];
    //     char state[100];
    // } adds;

    // int main()
    // { //Input
    //     adds s[100];
    //     for (int i = 1; i <= 2; i++)
    //     {
    //         printf("House No. : ");
    //         scanf("%d", &s[i].houseno);
    //         printf("Block No. : ");
    //         scanf("%d", &s[i].block);
    //         printf("City : ");

    //         scanf("%s", &s[i].city);

    //         printf("State : ");
    //         scanf("%s", &s[i].state);

    //     }

    // Output

    //     for (int i = 1; i <= 2; i++)
    //     {
    //         printf("House No. = %d\n", s[i].houseno);
    //         printf("Block No. = %d\n", s[i].block);
    //         printf("City = %s\n", s[i].city);
    //         printf("State = %s\n", s[i].state);
    //     }
    // }

    //! Vectors //!

    // struct vector
    // {
    //     int x;
    //     int y;
    // };
    // void calcsum(struct vector v1, struct vector v2, struct vector sum)
    // {
    //     sum.x = v1.x + v2.x;
    //     sum.y = v1.y + v2.y;
    //     printf("The value of x component of sum is : %d\n", sum.x);
    //     printf("The value of y component of sum is : %d\n", sum.y);
    // }

    // int main()
    // {
    //     struct vector v1;
    //     struct vector v2;
    //     struct vector sum = {0};
    //     printf("Enter the value of x componets for v1 n v2 :");
    //     scanf("%d", &v1.x);
    //     scanf("%d", &v2.x);
    //     printf("Enter the value of y components for v1 n v2 :");
    //     scanf("%d", &v1.y);
    //     scanf("%d", &v2.y);
    //     calcsum(v1, v2, sum);
    //     return 0;
    // }

    //! Complex numbers with arrow operator //!

    // typedef struct complex
    // {
    //     int real;
    //     float imag;

    // } com;

    // int main()
    // {
    //     com number1;
    //     com *ptr = &number1;
    //     printf("The real part : ");
    //     scanf("%d", &ptr->real);
    //     printf("the imaginary part : ");
    //     scanf("%f", &ptr->imag);

    //     float y = ptr->real + ptr->imag;
    //     printf("Complex Number = %f" , y);
    //     return 0;
    // }

    //? Array notation is used instead of struct because same quantity needs to be stored!! //?

    // void printmarks(int n)
    // {
    //     int marks[100];
    //     for (int i = 1; i <= n; i++)
    //     {
    //         printf("Enter marks : ");
    //         scanf("%d", &marks[i]);
    //     }
    //     for (int i = 1; i <= n; i++)
    //     {
    //         printf("%d. student marks = %d\n", i, marks[i]);
    //     }
    // }

    // int main()
    // {
    //     int n;
    //     printf("Enter the number of students : ");
    //     scanf("%d", &n);
    //     printmarks(n);
    // }

    //?To get the details of the bank account holders //?

    // typedef struct bankaccount{
    //     char name[100];
    //     int accno;

    // }bank;

    // int main(){
    //     bank s[100];
    //     int n;
    //     printf("Print the no of bank account holders : ");
    //     scanf("%d", &n);
    //     for(int i=1; i <= n ; i++){
    //         printf("Enter the details\n");
    //         printf("Enter name:");
    //         scanf("%s" , &s[i].name);
    //         printf("Enter accno:");
    //         scanf("%d", &s[i].accno);
    //     }
    //     for(int i=1; i<= n ; i++){
    //         printf("The details are :\n Name = %s, Account Number = %d\n" ,s[i].name,s[i].accno);
    //     }

    // }

    //? FILE function //?

    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("Text.doc" , "r");
    //     fclose(fptr);
    //     return 0;
    // }

    /*
    Few types of FILE functions

    "r" : for reading
    "rb" : for reading in binary
    (if we try to read or open that file which does not exist then "NULL" is stored in the ptr)
    "w" : for writing
    "wb" : for writing in binary
    (if we try to write or open that file which does not exist then "new file" is created in the ptr)
    (both these functions overwrite the existing data in the file if it exists....!)
    "a" : append the document (data is written after already written data in the file...)
    */

    //! Do check if the file exists or not!! //!

    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("NewText.docx","w");
    //     if(fptr == NULL){
    //         printf("File doesn't exist :(");
    //     }
    //     else{
    //         fclose(fptr);
    //     }

    //     return 0;

    // }

    //? Reading a FILE //?

    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("Test.docx","r");
    //     char ch[100];
    //     if(ch != "\0"){
    //         fscanf(fptr, "%s" , &ch);
    //         printf("Character is %s\n" , ch);

    //     }
    //     else{
    //         printf("Sorry!");
    //     }
    //     fclose(fptr);

    // }

    //? Eg.

    // int main()
    // {
    //     FILE *fptr;
    //     fptr = fopen("NewTest.docx", "w");

    //     fprintf(fptr , "%c" , 'M');
    //     fprintf(fptr , "%c" , 'A');
    //     fprintf(fptr , "%c" , 'N');
    //     fprintf(fptr , "%c" , 'G');
    //     fprintf(fptr , "%c" , 'O');
    //     fclose(fptr);
    //     return 0;

    // }

    // int main()
    // {
    //     FILE *fptr;
    //     fptr = fopen("Test.txt", "r");
    //     printf("%c\t", fgetc(fptr));
    //     printf("%c\t", fgetc(fptr));
    //     printf("%c\t", fgetc(fptr));
    //     printf("%c\t", fgetc(fptr));
    //     printf("%c\t", fgetc(fptr));
    //     fclose(fptr);
    //     return 0;
    // }

    //? Something about Append Function //?
    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("NewTest.txt", "a");

    //     fputc('A',fptr);
    //     fputc('A',fptr);
    //     fputc('R',fptr);
    //     fputc('A',fptr);
    //     fputc('V',fptr);
    //     fputc('M',fptr);
    //     fputc('A',fptr);
    //     fputc('H',fptr);
    //     fputc('A',fptr);
    //     fputc('J',fptr);
    //     fputc('A',fptr);
    //     fputc('N',fptr);
    //     return 0;
    // }

    //! Use of EOF(End of Line) when using fgetc //!
    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("Test.txt", "r");
    //     char ch;
    //     ch = fgetc(fptr);
    //     while(ch != EOF){
    //         printf("%c" , ch);
    //         ch = fgetc(fptr);
    //     }
    //     printf("\n");
    // }

    //? To print 5 integers from the file //?

    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("Test.txt","r");
    //     int n;
    //     printf("The integers are : ");
    //     fscanf(fptr, "%d", &n);
    //     printf("%d" , n);
    //     fscanf(fptr, "%d", &n);
    //     printf("%d" , n);
    //     fscanf(fptr, "%d", &n);
    //     printf("%d" , n);
    //     fscanf(fptr, "%d", &n);
    //     printf("%d" , n);
    //     fscanf(fptr, "%d", &n);
    //     printf("%d" , n);
    //     fclose(fptr);
    //     return 0;
    // }

    //? Input Info of a student //?

    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("Student Info.txt", "w");
    //     char name[100]; int rollno; float cgpa;

    //     printf("Enter name : ");
    //     scanf("%s", name);
    //     printf("Roll No:");
    //     scanf("%d", &rollno);
    //     printf("CGPA :");
    //     scanf("%f", &cgpa);

    //     fprintf(fptr , "%s\t", name);
    //     fprintf(fptr , "%d\t", rollno);
    //     fprintf(fptr , "%f\t", cgpa);

    //     fclose(fptr);
    //     return 0;

    // }

    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("Test.xlsx", "w");
    //     int n;
    //     printf("Enter n : ");
    //     scanf("%d" ,&n);
    //     for(int i = 1; i <= n; i++){
    //         if (i % 2 != 0){
    //             fprintf(fptr , "%d\t" , i);
    //         }

    //     }

    // }

    //?To replace two numbers present in file with their sum :) //?
    // int main(){
    //     FILE *fptr;
    //     fptr = fopen("Test.txt" , "w");

    //     int a=10;
    //     int b=90;
    //     int sum = a+b;
    //     fprintf(fptr, "%d", sum);
    //     fclose(fptr);
    //     return 0;
    // }

    //! Dynamic Memory Allocation //? Allocated at run time

    //? Malloc()

    // int main(){
    //     printf("Char Size : %d\n" , sizeof(char));
    //     printf("Int Size : %d\n" , sizeof(int));
    //     printf("Float Size : %d\n" , sizeof(float));

    //     int *ptr;
    //     ptr = (int*) malloc(5* sizeof(int));

    //     for (int i = 0; i < 5; i++){
    //         printf("Enter the value of %d. " , i);
    //         scanf("%d" , &ptr[i]);

    //     }
    //     for(int i = 0 ; i < 5 ; i++){
    //         printf("The value of Numbers are = %d\n" ,ptr[i]);
    //     }
    //     return 0;
    // }

    //? Float Malloc //?

    // int main(){
    //     float *ptr;
    //     ptr = (float*) malloc(5* sizeof(float));

    //     for(int i = 0; i<5 ; i++){
    //         printf("Enter %d. value :" , i);
    //         scanf("%f", &ptr[i]);
    //     }

    //     for(int i = 0; i<5 ; i++){
    //         printf("%f\n" , ptr[i]);
    //     }
    //     return 0;
    // }

    //? Calloc Function //?

    // int main(){
    //     float *ptr;
    //     ptr = (float *) calloc(5 , sizeof(float));
    //     printf("%f\n" , ptr[0]);
    //     return 0;
    // }

    //? Size allocate according to n by user //?

    // int main()
    // {
    //     int *ptr;
    //     int n;
    //     printf("Enter the value of n :");
    //     scanf("%d", &n);

    //     ptr = (int *)calloc(n, sizeof(int));
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%d\t", ptr[i]);
    //     }

    //     free(ptr);

    //     ptr = (int *)calloc(2, sizeof(int));
    //     for (int i = 0; i < 2; i++)
    //     {
    //         printf("%d\n\t", ptr[i]);
    //     }
    //     return 0;
    // }

    //? Eg.

    // int main()
    // {
    //     int *ptr;

    //     ptr = (int *)malloc(5 * sizeof(int));
    //     printf("Enter the values :");
    //     for (int i = 0; i < 5; i++)
    //     {
    //         scanf("%d", &ptr[i]);
    //     }

    //     ptr = realloc(ptr, 8);

    //     printf(" Enter the new values : ");
    //     for (int i = 0; i < 8; i++)
    //     {
    //         scanf("%d", &ptr[i]);
    //     }

    //     for (int i = 0; i < 8; i++)
    //     {
    //         printf("%d\t", ptr[i]);
    //     }

    //     return 0;
    // }

    //? Eg. //?

    // int main()
    // {
    //     int *ptr;
    //     ptr = (int *)calloc(5, sizeof(int));

    //     ptr[0] = 1;
    //     ptr[1] = 3;
    //     ptr[2] = 5;
    //     ptr[3] = 7;
    //     ptr[4] = 9;

    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("%d\n", ptr[i]);
    //     }

    //     ptr = realloc(ptr, 6);

    //     ptr[0] = 2;
    //     ptr[1] = 4;
    //     ptr[2] = 6;
    //     ptr[3] = 8;
    //     ptr[4] = 10;
    //     ptr[5] = 12;

    //     for (int i = 0; i < 6; i++)
    //     {
    //         printf("%d\n", ptr[i]);
    //     }
    //     free(ptr);
    //     return 0;
    // }
