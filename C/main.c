#include <stdio.h>
int x = 21;
extern int no;

extern void marvellous();
int main (int argc, char **argv)
{
    printf("Value of x is : %d\n",x);

    printf("Value of no is :%d\n",no);

    marvellous();//function call kela ahe  




    return 0;

}