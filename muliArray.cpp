#include <iostream>
using namespace std;

int main()
{
  // C++ allows for the initialization of arrays.  In the following,
  // we are initializing a 10x2 integer array. After initialization,
  // sqrs[0][0] = 1
  // sqrs[0][1] = 1
  // sqrs[1][0] = 2
  // sqrs[1][1] = 4
  // and so on
  //sqrs[row][column]
  int sqrs[10][2] = {
      {1, 1},
      {2, 4}, // The square of 2 is 4,and so on
      {3, 9},
      {4, 16},
      {5, 25},
      {6, 36},
      {7, 49},
      {8, 64},
      {9, 81},
      {10, 100}};

  int i, j;

  cout << "Enter a number between 1 and 10: ";
  cin >> i;

  // look up i
  for (j = 0; j < 10; j++)
    if (sqrs[j][0] == i)
      break; // break from loop if i is found
  cout << "The square of " << i << " is ";
  cout << sqrs[j][1] << endl;

  return 0;
}