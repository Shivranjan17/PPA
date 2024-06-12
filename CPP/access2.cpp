#include <iostream>
using namespace std;
class Base 
{
    public:
    int A;
    private:
    int B;
    protected : 
    int  C;
    public :
    Base ()
    {
        A=10;B=20;C=30;
    }
    void fun()
    {
        cout<<A<<"\n";//allow
        cout<<B<<"\n";//allow
        cout<<C<<"\n";//allow
    }


    
};
class Derived : public Base {

    public:
    void gun()
    {
        cout<<A<<"\n"; //allow
        cout<<B<<"\n";//not allowed
        cout<<C<<"\n";//allowed

    }
};
int main()
{
    Base bobj;
    cout<<bobj.A<<"\n";//allowed
    cout<<bobj.B<<"\n";//not allowed 
    cout<<bobj.C<<"\n";//allowed

}