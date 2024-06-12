#include<stdio.h>
void Display (int iNo)
{
    int iCnt = 0;
    while (iCnt <iNo)
    {
        printf("Jay Ganesh\n");
        iCnt++;
    }
}
int main(int argc, char** argv)
{
    int iValue = 4;
    Display (iValue);
}