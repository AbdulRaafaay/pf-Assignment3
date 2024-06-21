#include <iostream>
using namespace std;

/* Task 2
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main ()
{
	int num1, num2, sum, sub, prod, div, rem;
	char operation;
	cout << "\n:::   MATH CALCULATOR   :::" << endl;
	cout << "\n\nEnter the first number : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	cout << "\nEnter \'+\' for ADDITION";
	cout << "\nEnter \'-\' for SUBTRACTION";
	cout << "\nEnter \'*\' for MULTIPLICATION";
	cout << "\nEnter \'/\' for DIVISION";
	cout << "\nEnter \'%\' for REMAINDER" << endl;
	cout << "\n\nPlease enter the OPERATION : ";
	cin >> operation;
	
	switch ( operation )
	{
		case '+':
			 sum = num1+num2;
			 cout << "\nThe Sum of given numbers = " << sum;
		break;
		
		case '-':
			 sub = num1-num2;
			 cout << "\nThe Subtraction of given numbers = " << sub;
		break;
			
		case '*':
			 prod = num1*num2;
			 cout << "\nThe Product of given numbers = " << prod;
		break;
			
		case '/':
			 switch ( num2 )
			 {
			 	case 0:
			 		cout << "\n:::   ERROR   :::" << endl;	
			 	break;
			 	default:
			 		div = num1/num2;
			 		cout << "\nThe Divison of given numbers = " << div;
			 }
		break;
			
		case '%':
			 switch ( num2 )
			 {
			 	case 0:
			 		cout << "\n:::   ERROR   :::" << endl;
			 	default:
			 		rem = num1%num2;
			 		cout << "\nThe Remainder of given numbers = " << rem;
			 }
		break;
		
		default:
			 cout << "\n:::   ERROR   :::" << endl;
			 cout << ":::   INVALID INPUT   :::";
	}
			
return 0;
}
