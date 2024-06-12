#include <stdio.h>


//self Refrential Structure
struct Demo
{
    int data; // 4
    struct Demo *next;//8

};
int main (int argc, char **argv)
{
   struct Demo obj1;
   struct Demo obj2;
   struct Demo obj3;

   obj1.data =11;
   obj1.next = &obj2;


   obj2.data =21;
   obj2.next = &obj3;

   obj3.data = 51;
   obj3.next =NULL;

   printf ("%d\n",obj1.data); //11
   printf("%d\n",obj1.next->data);//21
   printf("%d\n",obj1.next->next->data);//51


    return 0;

}