#include<iostream>
using namespace std;

class Arithematic
{
    public:
    int no1;
    int no2;

    Arithematic()
    {
        no1=0;
        no2=0;
    }
    Arithematic(int A,int B)
    {
        no1=A;
        no2=B;
    }
    int Addition()//function
    {
        int Ans=0;
        Ans=no1+no2;
        return Ans;
    }
    int Substraction()//function
     {
        int Ans=0;
        Ans=no1-no2;
        return Ans;
    }



};
int main() 
{
    int Value1=0,Value2=0,Ret=0;//variables
    cout<<"Enter First no :\n";
    cin>>Value1;//input for first value
    cout<<"Enter Second No:\n" ;
    cin>>Value2; //input for second
    

    Arithematic obj(Value1,Value2);//object creation
    Ret = obj.Addition();
    cout<<"Addition is:"<<Ret<<"\n";

    Ret = obj.Substraction();
    cout<<"Substraction is:"<<Ret<<"\n";


    return 0;
}