#include <iostream>
using namespace std;

int main()
{
  float gallons, liters;
  float constConv = 7.5;

  cout << "Enter number of gallons: ";
  cin >> gallons; // Read the inputs from the user

  liters = gallons * constConv; // convert to liters

  cout << "Liters: " << liters << endl; 

  return 0;
}
