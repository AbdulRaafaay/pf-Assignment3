#include <iostream>
using namespace std;
/* Task 14
   A program to calculate the weekly wage of an employee*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3

int main ()
{
int regpay, reghours, overpay, overhours, workhours, weeklywage;
cout<<"\n\nEnter the number of hours worked = ";
cin>>workhours;
regpay = (workhours/40)*40*1000;
overhours = workhours % 40;
overpay = overhours * 1500;
weeklywage = regpay + overpay;
cout<<endl<<"Your Weekly Wage is = "<<weeklywage<<" Rs";
return 0;
}
