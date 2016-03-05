#include <iostream>
#include <cstring>
using namespace std;
int main()
{
char word[5] = "?ate";
for (char ch = 'a';strcmp(word,"mate");ch++)
{
    cout<<word<<endl;
    word[0] = ch;
}   
system("Pause");
return 0;
}



 
