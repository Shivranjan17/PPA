#include<stdio.h>
#pragma pack(1)
struct Demo
{
    int no;
    float f;
    int data;
    char ch ;

};

union Hello
{
    int no;
    float f;
    int data;
    char ch ;



};
      int  main() 
{

    struct Demo dobj;
    union Hello hobj;
    printf ("Size of structure is :%d\n",sizeof(dobj)) ;//13
    printf ("Size of union  is :%d\n",sizeof(hobj)); //4

    hobj.no=11;
    printf("%d\n",hobj.no);

    hobj.data =21;
    printf("%d\n",hobj.no);//21
    printf("%d\n",hobj.data);//21

return 0;


}
