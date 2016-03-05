#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
// структуры
struct Marks
       {
       char name[80];
       int phys;
       int chem;
       int maths;
       };
int main()
{
 const int n=3;
 bool state;
 char s[80];
 Marks st[n];
       for(int i=0;i<n;i++)
               {
                cout<<("Student name: "); 
                gets(st[i].name);
                st[i].phys=3+rand()%3;
                st[i].chem=3+rand()%3;
                st[i].maths=3+rand()%3;
                }
       do
         {
                cout<<"Давайте поищем студента = ";
                gets(s);
                if(!strcmp(s,"exit")) return 0;
                state=true;
                for(int j=0;j<n;j++)
                        {
                        if(!strcmp(st[j].name,s))
                        {
                        state=false;
                        cout<<"Физика = "<<st[j].phys<<endl;
                        cout<<"Химия = "<<st[j].chem<<endl;
                        cout<<"Физика = "<<st[j].maths<<endl;
                        break;
                        }
                        }
                if(state) cout<<"Вы знаете, нет такого студента с таким именем! \n";
                }
                while(true);
                
system("Pause");
return 0;
}



 
