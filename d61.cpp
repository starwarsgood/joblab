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
       }; // Вот задал я структуру
void set_one(Marks &str)
     {
     cout<<("Введите студента = ");
     gets(str.name);
                str.phys=3+rand()%3;
                str.chem=3+rand()%3;
                str.maths=3+rand()%3;
     }; //задаем оценки
void set_all(Marks *str,int m)
     {
     for(int h=0;h<m;h++)
     set_one(str[h]);
     };
void get(Marks *str,int m)
     {
     bool state;
     char s[80];
 do
         {
                cout<<"Давайте поищем студента = ";
                gets(s);
                if(!strcmp(s,"exit")) return;
                state=true;
                for(int j=0;j<m;j++)
                        {
                        if(!strcmp(str[j].name,s))
                        {
                        state=false;
                        cout<<"Физика = "<<str[j].phys<<endl;
                        cout<<"Химия = "<<str[j].chem<<endl;
                        cout<<"Физика = "<<str[j].maths<<endl;
                        break;
                        }
                        }
                if(state) cout<<"Вы знаете, нет такого студента с таким именем! \n";
                }
                while(true);
  
};     
int main()
{
  const int n=3;
  Marks st[n];
  set_all(st,n);
  get(st,n);
system("Pause");
return 0;
}



 
