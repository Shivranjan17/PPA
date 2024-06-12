#include <stdio.h>

int main (int argc, char **argv)
{
    int Arr [5] = {10, 20, 30, 40, 50};
    printf("base address of array is : %d\n",Arr);//address
    printf("base address of array is : %d\n",&Arr);//address
    printf("base address of array is : %d\n",&Arr[0]);//address 

      printf("first element is : %d\n",Arr[0]);
      printf("second element is : %d\n",Arr[1]);
      printf("third  element is : %d\n",Arr[3]);


      printf("%d\n",Arr[2]);
      printf("%d\n",*(Arr+2));
      printf("%d\n",*(2+Arr));
      printf("%d\n",2[Arr]);
      
      

    return 0;
    
}