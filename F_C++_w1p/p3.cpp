#include <iostream>
using namespace std;


// Question
// Write a C++ program that takes the length of a rectangular fence in feet from the user and the width of
// the fence in feet and then outputs its area on the screen.
 

main(){
int num1,num2;
int area;

cout<<"Enter the length of rectangle:";
cin>>num1;

cout<<"Enter the width of rectangle:";
cin>>num2;
 
area=num1*num2;

cout<<"The area of rectangle is:"<<area;
}