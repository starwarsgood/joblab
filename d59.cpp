#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
// структуры
struct Marks
       {
       char name[80];
       int phys;
       int chem;
       int maths;
       } ivan,petr,sidor;
struct Exams
       {
       double phys;
       double chem;
       double maths;
       };
int main()
{
    strcpy(ivan.name,"Сергей Иванов");
    cout<<"Привет = "<<ivan.name<<endl;
    cout<<"Введите оценки по предметом\n";
    cout<<"Физика = ";
    cin>>ivan.phys;
    cout<<"Химия = ";
    cin>>ivan.chem;
    cout<<"Математика = ";
    cin>>ivan.maths;
    // находим средний бал
    Exams srbal;
    srbal.phys=(double)ivan.phys;
    srbal.chem=(double)ivan.chem;
    srbal.maths=(double)ivan.maths;
    double dl=(srbal.phys+srbal.chem+srbal.maths)/3;
    cout<<"Средний балл= "<<dl<<endl;
system("Pause");
return 0;
}



 
