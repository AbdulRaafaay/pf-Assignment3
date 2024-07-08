#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Task 1.2
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main ()
{
	int num1, num2, num3, num4, num5, largest;
	srand ( time (NULL) );
	num4 = rand ();
	num5 = rand();
	cout << "\n:::    LARGEST AMONG 5 NUMBERS   :::";
	cout << "\n\nNOTE : TWO NUMBERS WILL BE RANDOMLY GENERATED.";
	cout << "\n\nEnter the three numbers : " << endl;
	cin >> num1 >> num2 >> num3;
	largest =  num1>num2? num1>num3? num1>num4? num1>num5? num1 : num5 : num4>num5? num4 : num5 : num3>num4? num3>num5? num3 : num5 : num4>num5? num4 : num5 : num2>num3? num2>num4? num2>num5? num2 : num5 : num4>num5? num4 : num5 : num3>num4? num3>num5? num3 : num5 : num4>num5? num4 : num5 ;
	cout << "\nThe largest number among " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << " and " << num5 << " = " << largest;   
		
return 0;
}
