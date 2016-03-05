#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int **p;
int n,m;
cout<<"¬ведите n= ";
cin>>n;
cout<<"¬ведите m= ";
cin>>m;
p = new int*[n];
for(int i=0;i<n;i++)
        {
        p[i] = new int[m];
             for(int j=0;j<m;j++)
             {
             p[i][j]=1;
             cout<<p[i][j]<<" ";
             }
             cout<<endl;
        }
        for(int k=0;k<n;k++)
        delete[]p[k];
        delete[]p;
system("Pause");
return 0;
}



 
