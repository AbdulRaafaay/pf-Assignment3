#include <iostream>
using namespace std;
/* Task 6
   A program, which accepts days as integer and display total
   number of years, months and days in it.*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3

int main ()
{
int days,years,months,remdays;
cout<<"\nEnter the number of days = ";
cin>>days;
years = days/365;
months = (days%365)/30;
remdays = (days%365)%30;
cout<<"\nOUTPUT :"<<endl;
cout<< years<<" years ";
cout<< months<<" months ";
cout<< remdays<<" days ";
return 0;
}
