#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int *pt = new int;
*pt = 2000;
cout<<"Значение= "<<*pt<<"Место= "<<pt<<endl;
cout<<"Размер pt= "<<sizeof(pt)<<endl;
cout<<"Размер *pt= "<<sizeof(*pt)<<endl;
system("Pause");
return 0;
}



 
