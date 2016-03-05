#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int *p;
double *q;
p = new int;
q = new double(3.6);
cout<<"Введите Int номер=  ";
cin>>*p;
cout<<"Адрес p"<<p<<endl;
cout<<"его Значение="<<*p<<endl;
cout<<"А теперь адрес q= "<<q<<endl;
cout<<"Значение q= "<<*q<<endl;
delete p;
delete q;
system("Pause");
return 0;
}



 
