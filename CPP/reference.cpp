#include <iostream>
using namespace std;

int main (int argc, char** argv)
{
    int no = 11;
    int &x = no;//x is another name  for the variable 'no' which is nickname
    int &ref = no;
    double d = 90.9999;
    int *p = &no; // p points to an integer object whose value is stored in 'no'.
    int *(&z) = p;
    cout<< no<< "\n";
    cout << x << "\n";


    cout<<&no<<"\n";
    cout <<&x<<"\n";




    return 0;

}