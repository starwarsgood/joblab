#include <iostream>
#include <climits>
using namespace std;
int main()
{
      const int Lbs_per_stn = 14;
      int lbs;
      cout<<"¬ведите points = ";
      cin>>lbs;
      int stone = lbs / Lbs_per_stn;
      cout<<stone<<endl;
      int pounds = lbs % Lbs_per_stn;
      cout<<lbs<<" pounds are " <<stone
      <<" stone,"<<pounds<<" pound(s).\n";
 system("Pause");
return 0;
}



 
