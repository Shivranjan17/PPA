#include <iostream>
#include <stdlib.h>
using namespace std;

class Demo 
{
    public:
    int A,B;
    Demo ()
    {
        cout << "Inside constructor \n";
        A= 11;
        B = 22;

    }
    ~Demo ()
    {
        cout <<"Inside Destructor\n";

    }
    void fun(){
        cout << "Inside Fun Function\n";
    }

};
int main ()
{
    //Demo obj1;

     Demo *p = new Demo;// Dynamic memory allocation  
    //Demo *p = (Demo*)malloc (sizeof(Demo));//Static Memory Allocation malloc
    p -> fun();

    cout<< p->A<< "\n";
    cout<<p->B<<"\n";
    delete p;
    //free(p);malloc


    return 0;
}