#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int per = 10;
int *p;
p=&per;
cout<<"Вот это значение переменной per"<<per<<"\n";
cout<<"А это алрес ячейки где\n хранится переменная per= "<<&per<<endl;
for (int i=0;i<100;i++,p++)
    {
        cout<<p<<"  "<<*p<<endl;
    }
system("Pause");
return 0;
}



 
