#include <iostream>
using namespace std;
/* Task 1
   Calculate the remainder of a integer value without using the modulus
   operator (%)*/
  
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3
   
int main ()
{
int dividend, divisor, rem;
cout<<"\nEnter the dividend : ";
cin>> dividend;
cout<<"\nEnter the divisor : ";
cin>> divisor;
cout<<"\nREMAINDER : ";
rem = dividend/divisor;
rem = divisor*rem;
rem = dividend - rem;
cout<<rem;
return 0;
}


