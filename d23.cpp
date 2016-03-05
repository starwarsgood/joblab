#include <iostream>
#include <climits>
using namespace std;
int main()
{
  double a[]={0,1,0};
  double b[]={1,0,0};
  double c[3]; //тут результат
  for (int i=0;i<3;i++)
  {
  c[i]=a[(i+1)%3]*b[(i+2)%3]-a[(i+2)%3]*b[(i+1)%3];
  cout<<c[i]<<"\n";
  }
   int myPrimer=11;
 int rad=0;
   rad=(myPrimer%7);
   cout<<rad<<"\n";
    system("Pause");
return 0;
}
 
