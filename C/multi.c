#include <stdio.h>
int main (){
    int arr [4][5];
    arr[2][2]=11;
    arr[0][3]=21;
    arr[1][4]=11;
    arr[3][3]=21;
    arr[2][1]=11;
    arr[3][0]=21;
    arr[3][4]=11;
    arr[1][2]=21;


    printf ("%d\n",arr[1][4]);
    printf ("%d\n",arr[3][3]);
    printf ("%d\n",arr[1][2]);
    printf ("%d\n",arr[0][3]);
    


    return 0;

}