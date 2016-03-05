#include <iostream>
#include <climits>
using namespace std;

    void show(int *m, int kol)
    {
         for (int i=0;i<kol;i++)
         cout<<"n["<<i<<"] = "<<m[i]<<endl;
     }
 int main()
{
     int n[]= {1,2,3,4,5};
     show(n,5);    
 system("Pause");
return 0;
}



 
