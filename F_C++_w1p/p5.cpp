#include <iostream>
using namespace std;


// Question
/*  A  teacher wants to calculate the students marks percentage, teachers have 5 subject marks for every
student. He needs a program that automates this process by asking 5 subjects' marks from the user and
calculating the percentage of students. Total marks are 500 for 5 subjects. To guide the user, first you
need to display a message and then take input from the user. Do it for all 5 subjects. */


main(){
int s1,s2,s3,s4,s5,sum,perc;
string name;
cout<<"Enter your name:";
cin>>name;

cout<<"Enter the marks of first subject:";
cin>>s1;
cout<<"Enter the marks of second subject:";
cin>>s2;
cout<<"Enter the marks of third subject:";
cin>>s3;
cout<<"Enter the marks of four subject:";
cin>>s4;
cout<<"Enter the marks of fiveth subject:";
cin>>s5;


sum=s1+s2+s3+s4+s5;
perc=(sum/500)*100;  


cout<<"Student name is:"<<name<<endl;
cout<<"The precentage is:"<<perc;
}