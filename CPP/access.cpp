#include <iostream>
using namespace std;

class Demo 
{


    public:
    int i;
    private :
    int j;
    protected:
    int k;

    public:
    Demo()
    {
        i= 10;j= 20;
        k = 30;

    }
};
int main(int argc, char* argv[])
{
    Demo obj;
    cout<<obj.i;
    cout<<obj.j;//error
    cout<<obj.k;//error
    return 0;
} 