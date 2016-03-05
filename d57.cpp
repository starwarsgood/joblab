#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int *p,n;
cout<<"¬ведите n= ";
cin>>n;
p = new int[n];
for(int i=0;i<n;i++)
        {
         p[i] =2*i+1;
         cout<<p[i]<<" ";
         }
delete[] p;
 cout<<endl;
system("Pause");
return 0;
}



 
