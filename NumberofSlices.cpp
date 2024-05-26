#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/* Task 12
   A program to calculate the number of slices a pizza of
   any size can be divided into*/
   
// Name       : Abdul Rafay
// Roll No    : 23i-2027
// Assignment : 3

int main ()
{
float const pi = 3.141;
float diameter, area, radius, power, slices;
cout<<"\nEnter the Diameter (in inches) = ";
cin>> diameter;
radius = diameter/2;
power = pow(radius,2);
area = pi*power;
slices = area/14.125;
cout<<"\nThe Area of Pizza is = "<< area <<endl;
cout<< fixed << setprecision(1) <<"\nThe Number of Slices is = "<<slices;
return 0;
}
