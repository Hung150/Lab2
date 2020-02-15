#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
 int chairs, guests, j;
 cout <<"Guests, chairs: "; cin >> guests >> chairs;
 int comb1 = guests - chairs + 1;
 int comb2 = guests - chairs + 1;
 for (int i=1; i<chairs; i++)
 {
   j = comb2*(comb1+i);
   comb2 = j;
 }
 cout << j;
 getch ();
}
