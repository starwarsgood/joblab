#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
double *p3 = new double [3];
p3[0] = 0.2;
p3[1] = 0.4;
p3[2] = 0.7;
cout<<"p3[1] = "<<p3[1]<<endl;
p3=p3+1;
cout<<"Теперь p3[0] = "<<p3[0]<<" и ";
cout<<"p3[1] = "<<p3[1]<<endl;
p3=p3-1;
delete [] p3;
system("Pause");
return 0;
}



 
