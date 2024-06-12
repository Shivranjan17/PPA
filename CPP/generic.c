#include <stdio.h>


int main()
{

    char ch = 'A';
    int i = 11;
    float f = 90.99;
    double d = 90.99;


    char *cp = &ch ;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = NULL; //void pointer can hold any type of data
                     //it is used to pass 


    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);


    vp = &ch;
    printf("%c\n",*(char*)vp);
    vp = &i;
    printf("%d\n",*(int*)vp);
    vp = &d;
    printf("%f\n",*(double*)vp);
    vp = &f;
    printf("%f\n",*(float*)vp);

    return 0;

}