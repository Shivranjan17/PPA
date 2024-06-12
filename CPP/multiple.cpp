#include <iostream >
using namespace std;
class Demo 
{
    public:
    int A;
    Demo ()//condtructor
    {
        A = 10;
        cout <<"Inside Demo COnstructor\n";

    }
    ~Demo()//destructor
    {
        cout << "Inside Demo Destructor\n";
    }
    void Fun()//Behaviour
    {
        cout <<"inside Fun of Demo\n";
    }




};
class Hello 
{
    public:
    int B;
    Hello()
    {
        B = 20;
        cout <<"Inside Hellop COnstructor\n";
        
    }
    ~Hello()
    {
        cout<<"Inside Hello Destructor\n";
    }
    void Gun ()
    {
        cout << "inside gun of Hello\n";
    }



};
class Marvellous : public Demo , public  Hello //constructor calling sequence gets call in this sequence only
{
    public:
    int C;
    Marvellous() 
    {
        C= 30;
        cout <<"Inside  Marvellous Constructor \n";

    }
    ~Marvellous() 
    {
        cout<<"Inside Marvellos Destructor\n";

    }
    void Sun()
    {
        cout <<"inside sun of Marvellous\n";

    }





};
int main ()
{


    Marvellous mobj;
    mobj.Fun();
    mobj.Gun();
    mobj.Sun();


    cout<<mobj.A<<"\n";
    cout<<mobj.B<<"\n";
    cout<<mobj.C<<"\n";
    return 0;
}