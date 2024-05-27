#include <iostream>
using namespace std;
/* Task 8
   A program that takes 5-digit number from user and prints reverse of
   that number and sum of all digits*/

// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3

int main ()
{
int num, a, b, c, d, e, sum;
cout<<"\nEnter a five digit Number = ";
cin>>num;
a = num%10;
b = (num/10)%10;
c = (num/100)%10;
d = (num/1000)%10;
e = (num/10000)%10;
sum = a + b + c + d + e;
cout<<"\nREVERSE = "<<a<<b<<c<<d<<e<<endl;
cout<<"SUM = "<< sum;

return 0;
}


