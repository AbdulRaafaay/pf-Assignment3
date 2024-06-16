#include <iostream>
using namespace std;
/* Task 13
   A program that plays a word game with the user*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3

int main () 
{
int age;
string name, city, college, profession, animal, petname;
cout<<"\nEnter Name           : ";
cin>> name;
cout<<"Enter Age            : ";
cin>> age;
cout<<"Enter City           : ";
cin>>city;
cout<<"Enter College        : ";
cin>> college;
cout<<"Enter Profession     : ";
cin>> profession;
cout<<"Enter Animal         : ";
cin>> animal;
cout<<"Enter Name of Animal : ";
cin>> petname;
cout<<"\n\n\n\"There once was a person named "<<name<<" who lived in "<<city<<". At the age of "<<age<<",\n"<<name<<" went to college at "<<college<<". "<<name<<" graduated and went to work as a\n"<<profession<<".Then,"<<name<<" adopted a(n) "<<animal<<" named "<<petname<<". They both lived happily\never after\""; 
return 0;
}


