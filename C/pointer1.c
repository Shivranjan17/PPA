#include<stdio.h>
int main()
{
    int No = 11;
    int * ptr = &No; // pointer to an integer variable

    double Data = 90.9999;
    double * dptr = &Data; //pointer to a double variable
    printf("%d\n",No); //11
    printf("%f\n",Data);//90.9999
    printf("%d\n",sizeof(No));//4 bytes
    printf("%d\n",sizeof(ptr));//8
    printf("%d\n",sizeof(Data));//8
    printf("%d\n",sizeof(dptr));//8
    printf("%d\n",*ptr);//11
    printf("%f\n",*dptr);//90.9999
    printf("%d\n",&No);
    printf("%f\n",&Data);



    return 0;

}