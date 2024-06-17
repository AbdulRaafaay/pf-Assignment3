#include <iostream>
using namespace std;

/* Task 4a
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main ()
{
	int color;
	cout << "\n:::    COLORS OF RAINBOW    :::" << endl;
	cout << "\nEnter a number between 0 and 127 : ";
	cin >> color;
	cout << "\n::   COLORS   ::";
	if ( color<0 || color>127 )
		cout << "\n:::   INVALID INPUT   :::";
	if ( color & 1 )
		cout << "\n\n : VIOLET :";
	if ( color & 2 )
		cout << "\n\n : INDIGO :";
	if ( color & 4 )
		cout << "\n\n : BLUE :";
	if ( color & 8 )
		cout << "\n\n : GREEN :";
	if ( color & 16 )
		cout << "\n\n : YELLOW :";
	if ( color & 32 )
		cout << "\n\n : ORANGE :";
	if ( color & 64 )
		cout << "\n\n : RED :";
		
return 0;
}
