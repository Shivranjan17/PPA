#include <stdio.h>
struct Demo
{
    int no;
    int data;

};
int main (int argc, char **argv)
{
    struct Demo obj;
    struct Demo *ptr = &obj;

    obj.no = 11;
    // . is direct accessing operator
    ptr->data=21;
    // -> is inderect accessing operator
    return 0;

}