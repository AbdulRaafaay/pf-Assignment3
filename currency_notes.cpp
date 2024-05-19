#include <iostream>
using namespace std;
/* Task 4
   A program which accepts amount in Taks as input (integer) and display
   total number of Currency Notes of 650, 330, 110, 60 25, 12, 5 and 1 Takas*/

// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3   
   
int main ()
{
int amount, note1, note2, note3, note4, note5, note6, note7;
cout<<"\nEnter the amount in Takas = ";
cin>>amount;
note1 = amount/650;
note2 = (amount%650)/330;
note3 = (amount%650%330)/110;
note4 = (amount%650%330%110)/60;
note5 = (amount%650%330%110%60)/10;
note6 = (amount%650%330%110%60%10)/5;
note7 = (amount%650%330%110%60%5)/1;
cout<<"\nCurrency Note:  Number "<<endl;
cout<<"     650       :     "<<note1<<endl;
cout<<"     330       :     "<<note2<<endl;
cout<<"     110       :     "<<note3<<endl;
cout<<"     60        :     "<<note4<<endl;
cout<<"     10        :     "<<note5<<endl;
cout<<"     5         :     "<<note6<<endl;
cout<<"     1         :     "<<note7<<endl;
return 0;
}

