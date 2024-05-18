#include <iostream>
using namespace std;
/* Task 2
   A program that takes 5 bit binary number in an integer variable and
   flips the all the respective bits*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3   

int main() 
{
int num, dig1, dig2, dig3, dig4, dig5 ;
cout << "\nEnter a 5-digit binary number = ";
cin >> num;
dig1 = num%10;
dig2 = (num/10)%10;
dig3 = (num/100)%10;
dig4 = (num/1000)%10;
dig5 = (num/10000)%10;
dig1 = !dig1;
dig2 = !dig2;
dig3 = !dig3;
dig4 = !dig4;
dig5 = !dig5;
cout << "\nThe Output Is = " << dig5 << dig4 << dig3 << dig2 << dig1;
return 0;
}
