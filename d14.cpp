#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
  // заполнение одномерного статического массива
  //поехали
  int mas[10];
  int i, *p;
  for (i=0;i<10;i++)
  {
  mas[i]=i;
  p=&mas[i];
  cout<<p<<" = ";
  cout<<mas[i]<<" ";
  cout<<endl;
}
  // организуем вывод этого массива
    system("Pause");
return 0;
}
 
