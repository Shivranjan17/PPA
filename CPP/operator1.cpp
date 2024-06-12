#include <iostream>
using namespace std;
class Demo
{
    public:
    int A,B;
    Demo (int i,int j)
    {
        A=i;
        B=j; 
    }

};

int main (int argc, char* argv[]){

    Demo obj1(10,11);
    Demo obj2(20,21);

    obj1 + obj2;
    return 0;
}