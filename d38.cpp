#include <iostream>
#include <string>
using namespace std;
int main()
{
char arr1[20];
char arr2[20] = "Ягуар";
string str1;
string str2 = "Пантера";
cout<<"Введите животное= ";
cin>>arr1;
cout<<"Введите другое животное ";
cin>>str1;
cout<<"Вот некоторые животные "<<endl;
cout<<arr1<<arr2<<str1<<str2<<endl;
cout<<"Третья буква в слове "<<arr2<<arr2[2]<<endl;
cout<<"Третья буква в слове "<<str2<<str2[2]<<endl;
system("Pause");
return 0;
}



 
