#include <iostream>
#include <climits>
using namespace std;
int main()
{
    double nMas_a[3],nMas_b[3],result;
    cout<<"Введите элементы массива"<<"\n";
    for(int i=0;i<3;i++)
    {
            cout<<"Введите "<< i <<" элемент массива a"<<endl;
            cin>>nMas_a[i];
     }
     //Теперь заполним второй массив
     for (int j=0;j<3;j++)
     {
         cout<<"Введите "<< j <<" элемент массива b"<<endl;
         cin>>nMas_b;
     }
    // теперь их перемножим
    for (int r=0;r<3;r++)
    result+=nMas_a*nMas_b; //то есть result=result+(nMas_a*nMas_b) ??
    // проверим данное утвержедение
    double result_proverka=result_proverka+(nMas_a*nMas_b);
    cout<<reult<<endl;
    cout<<reult_proverka<<endl;
    system("Pause");
return 0;
}
 
