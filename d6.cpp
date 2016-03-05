#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int *q,n,*p;
  n=100;
  int f=500;
  int *y;
  y=&f;
  cout<<y<<"\n";
  p=&n;
  q=p;
  (*p)++;
  cout<<*q<<"\n";
  cout<<n<<"\n";
  cout<<p<<"\n"; 
  // интересненько
  int *s,d;
  d=20;
  s=&d;
  for(int r=1;r<=10;r++,s++)
    cout << *s << endl;
  
system("pause");         
return 0;
}
          
