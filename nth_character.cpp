#include <iostream>
using namespace std;
/* Task 5
   A program which accepts two inputs on character and one integer
   number ‘n’ as input display its nth next and nth backward characters as output*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3
   
int main ()
{
char a, next, prev;
int num;
cout<<"\nEnter Character = ";
cin>>a;
cout<<"Enter a number = ";
cin>>num;
next = a + num;
prev = a - num;
  if(num==1)
     {
	cout<< endl <<num<<"st next value is : "<< next <<endl;
	cout<< num <<"st backward value is : "<< prev <<endl;
	return 0;
     }
  if (num==2)
     {
	cout<< endl <<num<<"nd next value is : "<< next <<endl;
	cout<< num <<"nd backward value is : "<< prev <<endl;
	return 0;
     }
  if (num==3)
     {
	cout<< endl <<num<<"rd next value is : "<< next <<endl;
	cout<< num <<"rd backward value is : "<< prev <<endl;
	return 0;
     }
cout<< endl << num <<"th next value is : "<< next <<endl;
cout<< num <<"th backward value is : "<< prev <<endl;
return 0;
}


