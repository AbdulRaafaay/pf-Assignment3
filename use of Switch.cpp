#include <iostream>
using namespace std;

/* Task 6
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main () 
{
	char choice;
	cout << "\n\n:::   STARTING POINTS   :::" << endl;
	cout << "\nL";
	cout << "\nM";
	cout << "\nN";
	cout << "\nO";
	cout << "\nP";
	cout << "\n\nENTER A STARTING POINT : ";
	cin >> choice;
	cout << "\n\n::   ROUND ABOUTS VISITED   ::";
		switch ( choice ) 
		{
			case 'L':
			case 'l':
				cout << "\n\n:  A  :";
			case 'M':
			case 'm':
				cout << "\n\n:  B  :";
			case 'N':
			case 'n':
				cout << "\n\n:  C  :";
			case 'O':
			case 'o':
				cout << "\n\n:  D  :";
			case 'P':
			case 'p':
				cout << "\n\n:  E  :";
		}
	cout << "\n\n::   DISTANCE TRAVELLED   ::";
		switch ( choice ) 
		{
			case 'L':
			case 'l':
				cout << "\n\nTOTAL DISTANCE = 12 kms";
				break;
			case 'M':
			case 'm':
				cout << "\n\nTOTAL DISTANCE = 8 kms";
				break;
			case 'N':
			case 'n':
				cout << "\n\nTOTAL DISTANCE = 6 kms";
				break;
			case 'O':
			case 'o':
				cout << "\n\nTOTAL DISTANCE = 3 kms";
				break;
			case 'P':
			case 'p':
				cout << "\n\nTOTAL DISTANCE = 2 kms";
		}
return 0;
}
