#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
  int n;
  int &copy=n;
  copy=100;
  n++;
  cout<<n<<"\n";
  cout<<copy<<"\n";
    system("Pause");
return 0;
}
 
