#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
  int n,*p,**q;
  p=&n;
  q=&p;
  n=100;
  (*p)+=5;
  (**q)--;
  cout <<n<<endl;
  cout<<*p<<endl;
  cout<<**q<<endl;
  cout<<p<<endl;
  cout<<q<<endl;
  cout<<"------------------"<<endl;
  int stop;
  stop=500;
  int *def;
  def=&stop;
  cout<<stop<<endl;
  cout<<def<<endl;
    system("Pause");
return 0;
}
 
