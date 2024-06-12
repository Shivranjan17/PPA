#include <iostream>
using namespace std;
class Arithematic
{
    public:
   
    int Addition(int no1, int no2)
    {
        return no1 +no2;

    }
    int Addition(int no1,int no2,int no3)
    {
        return no1+no2+no3;
    }
    double Addition(double no1,double no2)
    {
        return no1+no2;
    }
    double Addittion(double no1,double no2,double no3)
    {
        return no1+no2+no3;
    }
};
int main()
{
    Arithematic obj;
    cout <<obj.Addition(11,21)<<"\n";
    cout << obj.Addition(11,21,52)<<"\n";
    cout << obj.Addition(89.90,21.67)<<"\n";
    cout << obj.Addition(89.90,21.67,67.99)<<"\n";


    return 0;
}