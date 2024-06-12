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
class DerivedX : public Derived
{
    public :
    int P;
    DerivedX()
    { cout << "inside DerivedX constructor\n";
    P = 111;}
    ~DerivedX()
    { cout << "inside DerivedX destructor\n";}
    void sun(){ cout << "inside DerivedX sun\n";} 

};
int main(){
    DerivedX dobj;
    cout<<"size of Object is :"<<sizeof(dobj)<<"\n";//20

    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";
    cout<<dobj.P<<"\n";

    dobj.Fun( );// Base fun
    dobj.Gun();// Derived Gun
    dobj.sun();//Derived sun

     

    return 0;
    

}
