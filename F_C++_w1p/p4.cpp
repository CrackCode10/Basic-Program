#include <iostream>
using namespace std;

// Question
/* A toy car accelerates from initial velocity to final velocity in some time. You have to write the C++
program for calculating the Final Velocity. Take initial velocity, acceleration and time as input from the
user and calculate the final velocity of the car and display on the screen */



main(){
float intial_velocity,final_velocity,time,acceleration;
cout<<"Enter the intial velocity:";
cin>>intial_velocity;
cout<<"Enter the acceleration:";
cin>>acceleration;
cout<<"Enter the time:";
cin>>time;
final_velocity=acceleration*time+intial_velocity;
cout<<"The final velocity is:"<<final_velocity;

}
