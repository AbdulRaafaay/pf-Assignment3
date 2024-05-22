#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/* Task 10
   A program that asks for the principal, the interest rate, and the number of
   times the interest is compounded*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3
    
int main ()
{
int time;
float principal, rate, amount, interest, power;
cout<<"\nInterest Rate     = % ";
cin>>rate;
cout<<"Times Compunded   = ";
cin>>time;
cout<<"Principal         = $ ";
cin>>principal;
rate = rate/100;
power = (1+rate/time);
amount = principal * pow(power,time);
interest = amount - principal;
cout << setprecision(2) << fixed << "\nInterest          = $ "<<interest<<endl;
cout<< setprecision(2) << fixed << "Amount in Savings = $ "<<amount;
return 0;
}


