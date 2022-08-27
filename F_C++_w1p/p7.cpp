#include<iostream>
using namespace std;


// Question

/*During each summer, Ahmad and Fatima grow vegetables in their backyard and buy seeds and fertilizer
from a local nursery. The nursery carries different types of vegetable fertilizers in various bag sizes. When
buying a particular fertilizer, they want to know the price of the fertilizer per pound and the cost of
fertilizing per square foot. Write the Algorithm that prompts the user to enter*/
main(){
int bag,cost,area ;
float cp ,ap;
cout<<"Enter the size of bag:";
cin>>bag;
cout<<"Enter the cost of bag:";
cin>>cost;
cout<<"Enter the area in square feet :";
cin>>area;

cp=(area+cost)/bag;
ap=cost/area;



cout<<"cost per pound of fertilizer:"<<cp<<endl;

cout<<"cost per square feet:"<<ap;





}