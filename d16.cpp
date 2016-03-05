#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
  
  int m[4][5],*p;
  for (int i=0;i<4;i++)
  {
      p=m[i]; // указателю p адрес первого элемента
      for (int j=0;j<5;j++)
      {
          *(p+j)=5*i+j+1;
          printf("%4d",m[i][j]);
      }
          printf("\n");
   }   
    system("Pause");
return 0;
}
 
