#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
//prototip
char *getname()
{
     char temp[80];
     cout<<"davay familia = ";
     cin>>temp;
     char *pn = new char(strlen(temp)+1);
     strcpy(pn,temp);
     return pn;
}
int main()
{
    char *name;
    name = getname();
    cout<<name<<"adress = "<<(int*)name<<endl;
    delete [] name;
    name = getname();
    cout<<name<<"adress = "<<(int*)name<<endl;
    delete [] name;
    system("Pause");
return 0;
}



 
