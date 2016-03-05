#include <iostream>
//#include <string>
//#include <locale>
//#include <clocale>
using namespace std;
int main()
    {
          int age,tr;
          setlocale(LC_ALL,"Russian");
          // Вывводится сообщение
          cout <<"Hello, World!\n"<<endl;
          cin >> age;
          cout << "Your number= "<<age<<endl;
          cin >> tr;
          cout << "Your number 2= "<<tr<<endl;
          cout << endl;
          int s=10;
          s=s++;
          cout<<"All sum= "<<s+tr+age<<endl;
          system("pause");
          return 0;
}
          
