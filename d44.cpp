#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
char str1[100];
char s = 'a';
for (int i=0;i<10;i++,s++)
    {
         str1[i]=s;
         str1[15]='\0';
    };
    //посимвольный ввод
    cout<<"¬ќт что получилось"<<str1<<endl;
system("Pause");
return 0;
}



 
