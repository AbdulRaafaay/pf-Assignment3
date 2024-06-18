#include <iostream>
using namespace std;

/* Task 5
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main ()
{
	unsigned short time, hours, minutes, seconds;
	cout << "\nEnter a 2 bytes long Time entry : ";
	cin >> time;
	hours = (time >> 11) & 31;
	minutes = ( (time << 6) >> 11) & 63;
	seconds = ( (time << 11) >> 11) & 31;
	cout << "\n\nTIME IS : " << hours << " hrs " << minutes << " mins " << seconds << " secs";  

return 0;
}
