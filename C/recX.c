#include<stdio.h>
void Display (int iNo)
{
    static int iCnt = 0;
    if (iCnt <iNo)
    {
        printf("Jay Ganesh\n");
        iCnt++;
        Display(iNo); //Recursive call
    }
}
int main(int argc, char** argv)
{
   
    Display (3);
    printf("End of main\n");
    return 0;
}