#include <iostream>
using namespace std;

/* Task 4b
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main ()
{
	int color; 
	bool condition1, condition2, condition3, condition4, condition5, condition6, condition7;
	cout << "\n:::    COLORS OF RAINBOW    :::" << endl;
	cout << "\nEnter a number between 0 and 127 : ";
	cin >> color;
	cout << "\n::   COLORS   ::";
	condition1 = color & 1;
	condition2 = color & 2;
	condition3 = color & 4;
	condition4 = color & 8;
	condition5 = color & 16;
	condition6 = color & 32;
	condition7 = color & 64;
		switch ( condition1 )
		{
			case 1:
				cout << "\n\n : VIOLET :";
		}
		switch ( condition2 )
		{
			case 1:
				cout << "\n\n : INDIGO :";
		}
		switch ( condition3 )
		{
			case 1:
				cout << "\n\n : BLUE :";
		}
		switch ( condition4 )
		{
	        	case 1:
				cout << "\n\n : GREEN :";
		}
		switch ( condition5 )
		{
			case 1:
				cout << "\n\n : YELLOW :";
		}
		switch ( condition6 )
		{
			case 1:
				cout << "\n\n : ORANGE :";
		}
		switch ( condition7 )
		{
			case 1:
				cout << "\n\n : RED :";
		}
	

return 0;
}
