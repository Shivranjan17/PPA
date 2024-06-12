#include <iostream>
using namespace std;


class Base 
{
    public:
    int A,B;
    Base()
    {
        cout<<"Inside Base constructor\n";
        A=11;
        B=21;
    }
    ~Base ()
    {
        cout<<"Inside Base Destructor\n";
    }
    void Fun(){
        cout<<"Inside Base fun\n";
    }




};
class Derived : public Base //derived class inherited from base class
{
    public:
    int X,Y;
    Derived()
    { cout<<"inside derived constructor\n";
    X =51;
    Y=101;
    }
    ~Derived()
    {  cout <<"inside derived destructor\n";}
    void Gun()
    { cout << "inside Derived gun\n";}



};
int main(){
    Derived dobj;
    cout<<"size of Object is :"<<sizeof(dobj)<<"\n";

    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";

    dobj.Fun( );
    dobj.Gun();

    return 0;
    

}
