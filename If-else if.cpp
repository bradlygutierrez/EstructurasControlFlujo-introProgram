// Solicita tres enteros y determina su orden
#include <iostream>
using namespace std;
int main()
{
   int x, y, z;
   cout << "Introduce tres enteros separados por espacios: ";
   cin >> x >> y >> z;

   cout << "El orden de menor a mayor es: ";
   if (x < y)
   {
      if (z < x)
         cout << z << ", " << x << ", " << y << endl;
      else if (z < y)
         cout << x << ", " << z << ", " << y << endl;
      else
         cout << x << ", " << y << ", " << z << endl;
   }
   else
   {
      if (z < y)
         cout << z << ", " << y << ", " << x << endl;
      else if (z < x)
         cout << y << ", " << z << ", " << x << endl;
      else
         cout << y << ", " << x << ", " << z << endl;
   }
}