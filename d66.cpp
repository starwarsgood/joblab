#include <iostream>
#include <string>
using namespace std;
int main()
{
   cout<<"Как я знаю повторения"<<endl;
   cout<<"Я это знал давно"<<endl;
   double num;
   double sum=0.0;
   for (int i=0;i<5;i++)
   {
       cout<<"Введите "<<i<<"   ";
       cin>>num;
       sum+=num;
   };
   cout<<"Получилось"<<endl;
   cout<<"Сумма чисел = "<<sum<<endl;
   cout<<"Среднее = "<<(sum/5)<<endl;
   
    system("Pause");
return 0;
}



 
