#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
   int i;
   int j;

   cout << setprecision( 2 );

   for ( i = 1; i <= 2; i++ )
   {
      cout << "i is now equal to " << i << endl;
      for ( j = 0; j <= 3; j++ )
      {
         cout << "\tj is now equal to " << j << endl;
         cout << "\t\ti + j = " << i + j << "\ti - j = " << i - j << endl;
         cout << "\t\ti * j = " << i * j << "\ti ^ j = " << pow( static_cast< double >( i ), j ) << endl;

         if ( j == 0 )
         {
            continue;
         }
         else
         {
            double a = static_cast<double>(i);
            double b = static_cast<double>(j);
            cout << "\t\ti / j = " << a / b << "\ti % j = " << i % j << endl;
         } // end else
      } // end for
   }

   cout << "\nThe final values of i and j are: " << i << " and " << j << endl;
} // end main
