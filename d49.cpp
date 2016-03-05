#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
char s[3][20];
for (int i=0;i<3;i++)
    {
     cout<<"Введите строку символов= ";
     gets(s[i]);         
    }
 for (int j=0;j<3;j++)
 cout<<s[j]<<endl;
system("Pause");
return 0;
}



 
