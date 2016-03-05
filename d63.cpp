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
int main()
{
Num *ps = new Num;
cout<<"Давайте заполним структуру"<<endl;
cout<<"Укажите символ = ";
cin.get(ps->symbol);
cout<<"Укажите целое число = ";
cin>>ps->integer;
cout<<"Укажите вещественное число = ";
cin>>ps->real;

// теперь выводим другим методом то что заполнили
cout<<"Вывод данных"<<endl;
cout<<"Целое число = "<<(*ps).integer<<endl;
cout<<"Вещественное число = "<<(*ps).real<<endl;
cout<<"Символ = "<<(*ps).symbol<<endl;
delete ps;
system("Pause");
return 0;
}



 
