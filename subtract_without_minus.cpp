#include <iostream>
using namespace std;
/* Task 3
   A program which subtracts 2 6-digit integer numbers without using
   minus “-” operator*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3   
   
int main ()
{
int num1, num2, temp1, temp2,answer;
cout<<"\nEnter the First 6-digit Number from which you have to subtract = ";
cin>>num1;
cout<<"\nEnter the Second 6-digit Number to be subtracted from First    = ";
cin>>num2;
	if ( num1>num2 )
	{
   	   num2 = 999999 - num2;
	   temp1 = num1 + num2;
	   temp2 = num1 + num2;
	   temp1 = temp1/1000000;
	   temp2 = temp2%1000000;
	   answer = temp1 + temp2;
	   cout<<"\n\nThe Answer Is = "<<answer;
	}
	else
	   cout<<"\n\n INVALID, First value should be greater than second!";
	
return 0;
}
