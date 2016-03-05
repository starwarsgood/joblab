#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n_int = INT_MAX; // загоняет в переменную максимальное число
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    // Теперь выведем информацию и осмыслим
    cout << "Это n_int=  "<< n_int << endl;
    cout << "Посмотрим что здесь= " << sizeof(int) << endl; // четыре байта?
    cout << "Уговорил посмотрим n_short=  " << sizeof n_short << endl;
    cout << "Теперь разберемся с long= " << n_long << endl;
    cout << "Максимальный лонг=  " << LONG_MAX << endl;
    cout << "Что то шортом связанное" << sizeof(short) << endl;
    cout << "Ну и еще раз short=  " << SHRT_MAX << endl;
    cout << "Бит=  " << CHAR_BIT << endl;
    cout << "Минимум= int " << INT_MIN << endl;
    cout << "Минимум= long  " << LONG_MIN << endl;
    cout << "Минимум short=   " << SHRT_MIN <<endl;
    //эксперимент
    cout << "Максимум char " << UCHAR_MAX << endl;
    cout << "Макс= long  " << ULONG_MAX << endl;
    cout << "Макс short=   " << USHRT_MAX <<endl;
    system("Pause");
return 0;
}
 
