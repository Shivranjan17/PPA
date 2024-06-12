#include <stdio.h>
int main()
{
    int Standard =0;
    printf("Enter your Standard : \n");
    scanf("%d",&Standard);

    switch (Standard)

    {
    case 1 :
    printf ("your exam is at 7 am \n");
    break;
    case 2 :
    printf("your exam is at 2 pm \n");
    break;
    case 3 :
    printf ("your exam is at 3 pm \n");
    break;
    case 4:
    printf("Your exam is at 4 pm \n");
    break;
    default :
    printf("Wrong choice! \n ");
 return 0;

    }
}