#include <iostream>
using namespace std;

// Question
// Write a C++ program to ask the user to enter two integers. Then, store the sum of those two integers in a
//variable and then display the sum on the screen.

main(){
int num1,num2;
int sum;

cout<<"Enter the first number :";
cin>>num1;

cout<<"Enter the  second number :";
cin>>num2;
 
sum=num1+num2;

cout<<"The sum of the number is:"<<sum;
}