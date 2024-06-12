#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    printf("Enter the value of 'a': ");
    scanf("%d", &a);

    b = a%2;
    if (b == 0) {
        printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
    return 0;
    }


}