#include <iostream>
using namespace std;


const int A = 10;
int B = 20;
class Demo 
{
    public:
    int X,Y;
    Demo()
    {
        X = 10;
        Y = 20;

    }
    void fun(int i, const int j)  //constant input argument
    {
        int No1 = 11;
        const int No2 = 21; // const local variable
        i++;//Allowed
        j++;//NA
        No1++; //A
        No2++; //Na
    }
};
int main ()
{
    Demo obj1;
    const Demo obj2;//constant object argument

    obj1.fun(51,101);

    obj1.X++;//A
    obj1.Y++;//A
    obj2.X++;//NA
    obj2.Y++;//NA
    A++;//NA
    B++;//A
    return 0;

}
