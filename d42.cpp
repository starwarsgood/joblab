#include <iostream>
struct student
       {
       int numer;
       double dengi;
       float sd;
       char fam[20];
       std::string alt;
            
       };
using namespace std;

int main()
{
student petrov = 
        {
        3,
        1000,
        23.4 ,
        "petrov",
        "turist",
        };
        cout<<petrov.numer<<"\n";
        cout<<petrov.dengi<<endl;
        cout<<petrov.sd<<"\n";
        //for(int i=0;i<=20;i++)
        cout<<petrov.fam<<endl;
        cout<<petrov.alt<<endl;
        // рассмотрим присваивание
        student sidorov;
        sidorov = petrov;
        cout<<sidorov.numer<<"\n";
        cout<<sidorov.dengi<<endl;
        cout<<sidorov.sd<<"\n";
        //for(int i=0;i<=20;i++)
        cout<<sidorov.fam<<endl;
        cout<<sidorov.alt<<endl;
system("Pause");
return 0;
}



 
