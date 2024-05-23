#include <iostream>
using namespace std;
/* Task 15
   A program that can be used as a math tutor for a young student.*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3
   
int main ()
{
int num1, num2, operation, sum, sub, prod, div, rem;
char a;
cout << "\nEnter the First Number = ";
cin >> num1;
cout << "Enter the Second Number = ";
cin >> num2; 
cout << "\n1. Addition" << endl;
cout << "2. Subtraction" << endl;
cout << "3. Product" << endl;
cout << "4. Division" << endl;
cout << "5. Remainder" << endl;
cout << "\nWhich Operation should be performed? ";
cin >> operation;
	if (operation == 1 )
		{
		    sum = num1 + num2;
		    cout << "\t\t  " << num1 <<endl;
		    cout << "\t\t+ " << num2 <<endl;
		    cout << "\t\t------ ";
		    cout << "    Enter \"a\" for Answer : ";
		    cin >> a;
		    cout << "\t\t  " << sum <<endl;
		 }
	if (operation == 2 )
		{
		    sub = num1 - num2;
		    cout << "\t\t  " << num1 <<endl;
		    cout << "\t\t- " << num2 <<endl;
		    cout << "\t\t------";
		    cout << "    Enter \"a\" for Answer : ";
		    cin >> a;
		    cout << "\t\t  " << sub <<endl;
		 }
	if (operation == 3 )
		{
		    prod = num1 * num2;
		    cout << "\t\t  " << num1 <<endl;
		    cout << "\t\t* " << num2 <<endl;
		    cout << "\t\t------ ";
		    cout << "    Enter \"a\" for Answer : ";
		    cin >> a;
		    cout << "\t\t  " << prod <<endl;
		 }
	if (operation == 4 )
		{
		    div = num1/num2;
		    cout << "\t\t  " << num1 <<endl;
		    cout << "\t\t/ " << num2 <<endl;
		    cout << "\t\t------ ";
		    cout << "    Enter \"a\" for Answer : ";
		    cin >> a;
		    cout << "\t\t  " << div <<endl;
		 }
	if (operation == 5 )
		{
		    rem = num1%num2;
		    cout << "\t\t  " << num1 <<endl;
		    cout << "\t\t% " << num2 <<endl;
		    cout << "\t\t------ ";
		    cout << "    Enter \"a\" for Answer : ";
		    cin >> a;
		    cout << "\t\t  " << rem <<endl;
		 } 	 
return 0;
}
