#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
// структуры
struct Num
       {
       int integer;
       double real;
       char symbol;
       };
void show(Num x)
     {
     cout<<" целое число = "<<x.integer<<endl;
     cout<<" вещественное число = "<<x.real<<endl;
     cout<<" символ = "<<x.symbol<<endl;
     };
int main()
    {
    Num a,b;
    Num *p,*q;
    p = &a;
    q = &b;
    p->integer=1;
    p->real=2.5;
    p->symbol='s';
    (*q).integer = 2;
    (*q).real = 5.7;
    (*q).symbol = 'r';
    show(a);
    show(*q);
    cout<<"А теперь эксперемент"<<endl;
//    show(*P);
    show(b);
    
system("Pause");
return 0;
}



 
