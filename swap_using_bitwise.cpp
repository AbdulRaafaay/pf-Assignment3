#include <iostream>
using namespace std;
/* Task 7.1
   Write two different C++ programs to swap two values without using a third
   value.*/
  
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3

int main ()
{
int val1, val2;
cout<<"\nEnter Value 1 = ";
cin>>val1;
cout<<"Enter Value 2 = ";
cin>>val2;
cout<<"\nBEFORE SWAPPING :  "<<endl;
cout<<"Value 1 = "<< val1 <<endl;
cout<<"Value 2 = "<< val2 <<endl;
val1 = val1^val2;
val2 = val2^val1;
val1 = val1^val2;
cout<<"\nAFTER SWAPPING : "<<endl;
cout<<"Value 1 = "<< val1 <<endl;
cout<<"Value 2 = "<< val2 ;
return 0;
}

