
#include <iostream>
// <cstdlib> is needed in order to use the rand().
// For older compilers, use <stdlib.h>
#include <stdlib.h>
using namespace std;

int main()
{
  int magic; // magic number
  int guess; // user's guess

  cout << "I will come up with a magic number between 0 and 9 ";
  cout << "and ask you to guess it." << endl;

  magic = rand() % 10; // get a random number between 0 and 9

  cout << "Enter your guess: ";
  cin >> guess;

  while (guess != magic) // as long as guess is incorrect
  {
    if (guess > magic)
    {
      cout << "Too big! Guess again..." << endl;
    }
    else // guess is less than magic
    {
      cout << "Too small! Guess again..." << endl;
    }
    cin >> guess;
  }
  cout << "You are RIGHT!" << endl;
  ;
  return 0;
}
