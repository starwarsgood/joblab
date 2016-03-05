#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
   short sam = SHRT_MAX;
   unsigned short sue = sam;
   cout << "Посмотрим sam   " << sam << endl;
   cout << " Посмотрим sue  " << sue << endl;
   sue++;
   sam++;
   cout << "Посмотрим sam   " << sam << endl;
   cout << " Посмотрим sue  " << sue << endl;
   sam = sue = ZERO;
       cout << "Посмотрим sam   " << sam << endl;
   cout << " Посмотрим sue  " << sue << endl;
   sue--;
   sam--;
   cout << "Посмотрим sam   " << sam << endl;
   cout << " Посмотрим sue  " << sue << endl;
    system("Pause");
return 0;
}
 
