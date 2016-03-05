#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int ln(char *str)
{
    int i=0;
    while(str[i])
    {
    i++;
    }
    return i;
}
int main()
{
 char str[20],str2[20];
 cout<<"Введите строку=  ";
 gets(str);
 cout<<"Количество символов= "<<ln(str);
 cout<<endl;
 cout<<"Введите вторую строку для опытов";
 gets(str2);
 cout<<"Копиреум= "<<(strcpy(str,str2))<<endl;
 cout<<"Соединяем= "<<strcat(str,str2)<<endl;
 
 
system("Pause");
return 0;
}



 
