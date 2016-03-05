#include <iostream>
 const int Max = 5;
 int fill_array(double ar[], int limit); // прототип функции которое возвращает целочисленное значение int
 void show_array(const double ar[], int n);// прототип функции показа массива
 void revalue(double r,double arp[], int n);// прототип функции обработки массиыва
 int main()
     {
           using namespace std;
            double propertites[Max]; // Задается длина массива, кол-во элементов
            int size = fill_array(propertites, Max); // функция которая заносит в заданный массив , заданное кол-во элементов
            show_array(propertites,size); // функция выводит массив
           cout << "Введите коэффициент обработки = ";
            double factor;
           cin >> factor;
            revalue(factor,propertites,size); // умножение каждого элемента массива, на некий коэфициент 
            show_array(propertites,size); // что получилось выводим
             cout <<"Готов"<<endl;
          system("Pause");
          return 0;
}
// описании функций
int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i=0;i < limit; i++)
    {
        cout << "Введите значение № = " << (i+1) << "  ";
        cin>>temp;
        if (!cin) // проверка на неправильный ввод
        {
                  cin.clear();
                  while (cin.get() !='\n')
                  continue;
                  cout << "Неправильный ввод, процесс ввода прекращен\n";
                  break;
                  }
                  else if (temp < 0) // завершение
                  break;
                  ar[i] = temp;
                  }
                  return i;
                  }
                  //следующая функция может использовать функцию,
                  // но не изменятьб массив по адресу ar
        void show_array(const double ar[], int n)
        {
             using namespace std;
            for (int i = 0; i<n ;i++)
            {
                cout << "Элемент № " << (i+1) << "  " ;
                cout << ar[i] << endl;
                }
                }
                
   // перемножить весь массив на некий коэффициент factor
   void revalue(double r,double ar[], int n)
     {
           using namespace std;
            for (int i = 0; i<n ;i++)
            ar[i] =  ar[i]*r;        
     }             



 
