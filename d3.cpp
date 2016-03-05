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
system("pause");         
return 0;
}
          
