#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double res,arg,st;
    cout << "������� ������ ������� �����=  ";
    cin >> arg;
    cout << "������� � ����� ������� ����� ��������= ";
    cin >> st;
    cout << "�� ������ �����="<<st<<arg<<endl;
    res = sqrt(arg);
    cout <<"��������� ���������� ����������� �����=  "
         << res
         << endl;
    cout << "��������� ���������� � ������� " << pow(arg,st) <<endl;
system("pause");         
return 0;
}
          
