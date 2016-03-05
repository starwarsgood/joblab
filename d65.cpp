#include <iostream>
using namespace std;
int main()
{
   int x;
   cout<<"Выражение х = 100  имеет значение ";
   cout<< ( x = 100 ) <<endl;
   cout <<"Теперь х = "<<x<<endl;
   cout<<"Выражение х < 3 имеет значение ";
   cout<<(x < 3)<<endl;
   cout<<"Выражение х > 3 имеет значение ";
   cout<<(x > 3)<<endl;
   cout.setf(ios_base::boolalpha);
   cout<<"Выражение х < 3 имеет значение ";
   cout<<(x < 3)<<endl;
   cout<<"Выражение х > 3 имеет значение ";
   cout<<(x > 3)<<endl;
   
    system("Pause");
return 0;
}



 
