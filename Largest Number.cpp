#include <iostream>
using namespace std;

/* Task 1.1
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main ()
{
	int num1, num2, num3, num4, largest;
	cout << "\n:::    LARGEST AMONG 4 NUMBERS    :::" << endl;
	cout << "\n\nEnter the four numbers : " << endl;
	cin >> num1 >> num2 >> num3 >> num4;
	largest =  num1>num2? num1>num3? num1>num4? num1 : num4 : num3>num4? num3 : num4 : num2>num3? num2>num4? num2 : num4 : num3>num4? num3 : num4 ;
	cout << "\nThe largest number among " << num1 << ", " << num2 << ", " << num3 << " and " << num4 << " = " << largest;   
		
return 0;
}
