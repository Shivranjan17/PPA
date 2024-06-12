#include <stdio.h>
int Addition (int No1, int No2)
{
    int Ans = 0;
    Ans = No1+No2;
    return Ans ;
}
int main()
{
    int A= 10;
    int B=11;
    int Ret = 0;
    printf("Inside main Function \n");
    Ret = Addition (A,B);
    printf(" Addition of A and B is : %d\n",Ret);   

}