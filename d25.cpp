#include <iostream>
#include <climits>
using namespace std;
int sumAB(int a,int b)
{
    int s=0; //иницилизация
    s=a+b;
    return s;
}
int main()
{
int n,m;
cout<<"Введите n=___ "<<"\b\b\b";
cin>>n;
cout<<"Введите m=___ "<<"\b\b\b";
cin>>m;
cout<<"Получите результат=  "<<sumAB(n,m)<<endl;
 system("Pause");
return 0;
}
 
