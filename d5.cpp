#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double res,arg;
    cout << "Введите данные первого числа=  ";
    cin >> arg;
    cout << "Введите в какую степень нужно возвести= ";
    double st;
    cin >> st;
    cout << "Вы вввели чилсо=" << arg <<endl;
    res = sqrt(arg);
    cout <<"Результат вычисления квартатного корня=  "
         << res
         << endl;
    cout << "Результат возведения в степень" << pow(arg,st) <<endl;
    double fast;
    fast = rand();
    cout <<" А теперь случайное число=" << fast <<endl;
      
    cout << "Загадайте число, угадаю его=";
    int aster;
    cin >> aster;
    switch(aster)
                {
                       case 0: cout << "Ноль" ;
                       break;
                       case 1: cout << "Один";
                         break;
                       case 2: cout << "Два";
                         break;
                       case 3: cout << "Три";
                         break;
                         default: cout << "Я не угада, ты победил";
                 }      
                 // а теперь калькулятор 
                   cout << "Введите первое число= " <<endl;
                   int we;
                   cin >> we;
                   cout << "Введите второе число= " ; 
                   int iop;
                   cin >> iop;
                   cout << "Что с ними сделать=" << endl;
                   char fult;
                   cin >> fult;
                   switch (fult)
                          {
         case '+' : cout << "Значить сложить, вот результат=" << (we+iop);
         break;
         case '-' : 
              {
                  cout << "Значить вычесть, надо проверить числа" << endl;
                  int sum;
                  sum = we-iop;
                  if (we>iop) cout << "Все нормально, вот результат=" << sum << endl;
                  else
                  cout << "Чувак результат бует отрицательный, но все эе=" << sum << endl;
                  }
        break;
              
} 
// ну а теперь матрицы
// выведем как его сами да в цикле     
for (int q=1;q<=10;q++)
{
cout << q <<" ";            
if (q>5) cout << endl;
}
system("pause");         
return 0;
}
          
