#include <iostream>
#include <string>
using namespace std;
void srr()
{
     cout<<"Введите строку= ";
     string str2,str3;
     cin>>str2;
     cout<<"Теперь другую =";
     cin>>str3;
     cout<<"Ну иеперь поехали"<<endl;
     cout<<"Сложим эти строки"<<endl;
     cout<<str2+str3<<"\n";
     str2+=str2;
     cout<<"Еще раз " <<str2<<endl;
     str3=str2;
     cout<<"Что это "<<str3<<endl;
}

int main()
{
srr();
system("Pause");
return 0;
}



 
