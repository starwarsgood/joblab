#include <iostream>
using namespace std;
int fakt(int d)
    {
     if (d==1) return 1;
     else
     return d*fakt(d-1);      
     }

int main() // всегда пишу прогу
{
cout<<"¬ведите число дл€ факториала=  ";
double v;
cin>>v;
cout<<"–езультат=  "<<fakt(v)<<endl;
system("Pause");
return 0;
}



 
