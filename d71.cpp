#include <iostream>
// #include <cstring>
void simple();
using namespace std;
int main()
{
    cout<<"main() вызывает simple():\n";
    simple();
    system("Pause");
return 0;
}
void simple()
{
       using namespace std;
       cout<<"Я-функция simple.\n";
}



 
