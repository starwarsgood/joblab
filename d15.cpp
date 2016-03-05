#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
  // заполнение одномерного статического массива
  //поехали
  int m[10][10];
  for (int i=0;i<10;i++)
  {
      for (int j=1;j<10;j++)
      {
          m[i][j]=rand()%10;
          cout<<m[i][j]<<" ";
          }
          cout<<"\n";
}
    system("Pause");
return 0;
}
 
