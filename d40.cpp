#include <iostream>
#include <string>
using namespace std;
void show(char *str)
     {
     if (*str!="\0") show(str+1);
     cout<<*str;
                    }
int main()
{
    char s[80];
    cout<<"¬ведите текст= ";
    gets(s);
    show(s);
    cout<<"------------\n";
system("Pause");
return 0;
}



 
