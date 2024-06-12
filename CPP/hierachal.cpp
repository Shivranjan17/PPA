
#include <iostream >
using namespace std;


    class Marvellous 
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
    } ;
    class Demo : public  Marvellous
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
class Hello :public Marvellous
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







int main ()
{

Demo dobj;
Hello hobj;

    return 0;
}