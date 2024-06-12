#include <iostream>
using namespace std;

class Demo {
    public:
    int i;
    private:
    int j;
    protected :
    int k;

    public:
    Demo ()
    {
        i = 10;
        j = 20;
        k = 30;
    } 
    friend void Fun();// all error will go by this line friend
};
void Fun(){
    Demo obj;
    cout << obj.i<<"\n";
    cout << obj.j<<"\n";// error as it is private 
    cout << obj.k<<"\n";//error as it is protected 
}
int main (int argc, char* argv[])
{
    Fun();
    return 0;

}