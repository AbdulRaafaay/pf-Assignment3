#include <iostream>
#include <cmath>
using namespace std;
// Task 11

// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3
   
int main ()
{
short numofpay;
float loan, rate, payment, amount, interest, sum, power;
cout<<"\nLoan Amount           = $ ";
cin>> loan; 
cout<<"Monthly Interest Rate = % ";
cin>> rate; 
cout<<"Number of payments    = ";
cin>> numofpay;
rate = rate/100;
sum = 1 + rate;
power = pow(sum,numofpay);
payment = (rate * power * loan)/(power - 1);
amount = payment * numofpay;
interest = amount - loan;
cout<<"\nMonthly payment       = $ "<< payment <<endl;
cout<<"Amount Paid Back      = $ "<< amount <<endl;
cout<<"Interest Paid         = $ "<< interest <<endl;
return 0;
}
