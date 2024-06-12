#include <stdio.h>
struct Demo
{
    int *p;
    float *q;

};
int main(int argc, char **argv){
    struct Demo obj;
    int no = 11;
    float f = 90.99;
    obj.p =&no;
    obj.q = &f;

    printf("%d\n",*(obj.p)); //prints 11 as expected
    printf("%f\n",*(obj.q));//90.99
    return 0;

}

