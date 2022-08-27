#include<iostream>
using namespace std;




// Question

/*Write a program that takes 15 numbers from the user, it adds the first 5 numbers, multiplies the
next 5 numbers, and subtract the next 5 numbers. After that it adds the first two results and
subtract the 3rd results and shows the final output on the monitor screen.*/
main(){
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;

int sum, mult,sub ,las;
cout<<"Enter the num1:";
cin>>n1;
cout<<"Enter the num2:";
cin>>n2;
cout<<"Enter the num3:";
cin>>n3;
cout<<"Enter the num4:";
cin>>n4;
cout<<"Enter the num5:";
cin>>n5;
cout<<"Enter the num6:";
cin>>n6;
cout<<"Enter the num7:";
cin>>n7;
cout<<"Enter the num8:";
cin>>n8;
cout<<"Enter the num9:";
cin>>n9;
cout<<"Enter the num10:";
cin>>n10;
cout<<"Enter the num11:";
cin>>n11;
cout<<"Enter the num12:";
cin>>n12;
cout<<"Enter the num13:";
cin>>n13;
cout<<"Enter the num14:";
cin>>n14;
cout<<"Enter the num15:";
cin>>n15;
sum=n1+n2+n3+n4+n5;
mult=n6*n7*n8*n9*n10;
sub=n11-n12-n13-n14-n15;
las=(sum+mult)-sub;

cout<<"-----------------------"<<endl;
cout<<"Resulting valur is :"<<las;


}