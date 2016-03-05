#include <iostream>
#include <climits>
using namespace std;
int main()
{
    double nMas_a[3],nMas_b[3],result;
    cout<<"Введите элементы массива"<<"\n";
    for(int i=0;i<3;i++)
    {
            cout<<"Введите "<< (i+1) <<" элемент массива a"<<endl;
            cin>>nMas_a[i];
     }
     //Теперь заполним второй массив
     for (int j=0;j<3;j++)
     {
         cout<<"Введите "<< (j+1) <<" элемент массива b"<<endl;
         cin>>nMas_b[j];
     }
    // теперь их перемножим
    double result_proverka,rab_per;
    result_proverka=rab_per=result=0;
      
    for (int r=0;r<3;r++)
    {
    result+=nMas_a[r]*nMas_b[r];
    //cout<<result<<"\n";
    //то есть result=result+(nMas_a*nMas_b) ??
    // проверим данное утвержедение
    rab_per =(nMas_a[r]*nMas_b[r]); 
    result_proverka=result_proverka+rab_per;
    //cout<<result_proverka<<"\n";
    }
    cout<<result<<endl;
    cout<<result_proverka<<endl;
    //что и требовалось доказать
    system("Pause");
return 0;
}
 
