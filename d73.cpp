#include <iostream>
using namespace std;
void ars(char, int);
int main()
{
    int times;
    char ch;
    cout<<"Введите символ: ";
    cin>> ch;
    while (ch!='q')
    {
          cout<<"Введите число: ";
          cin>>times;
          ars(ch,times);
          cout<<"\nВведите другой символ или нажмите "
          "клавишу q для выхода: ";
          cin>> ch;
    }
    cout << "Значение переменной times равно "<<times<<"\n";
    system("Pause");
   return 0;
}
void ars(char c,int num)
{
     while (num-- > 0)
   // for (int t=0;t<num;t=t+1)
    // {
          // n = n-1;
          // cout << "Что то ничего нет\n";
     cout << c;   
     //}
}




 
