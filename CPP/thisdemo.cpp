#include<iostream>
using namespace std;

class Arithematic
{
    public:
    int no1;
    int no2;

   
    Arithematic(int A,int B)
    {
        no1=A;
        no2=B;
    }
    int Addition()//function; int Addition (Arithematic * const this)
    {
        int Ans=0;
        //Ans=no1+no2;
        Ans = this->no1 + this->no2; //accessing the data members using
        return Ans;
    }
   



};
int main() 
{
    
    int Ret =0;
    Arithematic obj(21,11);//object creation
    Ret = obj.Addition();// Ret = Addition(&obj); calling function; Ret = Addition(100)
    cout<<"Addition is:"<<Ret<<"\n";

    
    return 0;
}