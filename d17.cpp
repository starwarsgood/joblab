#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
  double num[][3]={1.1,1.2,1.3,2.1,2.2,2.3,};
  for (int i=0;i<2;i++)
  {
      for (int j=0;j<3;j++)
      {
          cout<<num[i][j]<<" ";
          }
          cout<<endl;
          
          }
    system("Pause");
return 0;
}
 
