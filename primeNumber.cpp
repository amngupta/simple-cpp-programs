#include<iostream> // library for basic input/output functions
#include<cmath> // library for using math functions
 
using namespace std;
 
int main()
{
   int n, status = 1, num = 3, count, c;
   //prompting user to enter number of prime numbers to print
   cout << "Enter the number of prime numbers to print: ";
   cin >> n;
 
   // input is valid display first prime number
   if ( n >= 1 )
   {
      cout << "First " << n <<" prime numbers are :-" << endl;
      cout << 2 << endl;
   }
 
   for ( count = 2 ; count <=n ;  ) //loop that will iterate through n numbers
   {
      for ( c = 2 ; c <= (int)sqrt(num) ; c++ )// for each element check whether it is prime or not
      {
        //if number is completely divisible by a number other than 1 and itselft,then number is not prime
         if ( num%c == 0 ) 
         {
            status = 0;
            break;
         }
      }
      //if it is a prime number, print it
      if ( status != 0 )
      {
         cout << num << endl;
         count++;
      }
      status = 1;
      num++;
   }         
 
   return 0;
}