#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/*Task 9
  A program that asks the user for an angle, entered in radians. The program
  should then display the sine, cosine, and tangent of the angle*/
  
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3

int main ()
{
float angle, sine, cosine, tangent;
cout<<"\nEnter the angle (in radians) = ";
cin>>angle;
sine = sin(angle);
cosine = cos(angle);
tangent = tan(angle);
cout<< fixed << setprecision(4) <<"\nSine of angle is = "<< sine <<endl;
cout<<  fixed << setprecision(4) <<"Cosine of angle is = "<< cosine <<endl;
cout<<  fixed << setprecision(4) <<"tangent of angle is = "<< tangent <<endl;
return 0;
}

