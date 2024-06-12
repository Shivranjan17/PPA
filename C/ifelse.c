#include <stdio.h>
int main()
{
    int Standard = 0;
    printf ("Enter your Standard : \n");
    scanf("%d", &Standard);
    if (Standard == 1) {
        printf("Your exam is at 7 am\n");
        }

         else if(Standard ==2){
            printf("Your exam is at 8:30 am\n");
        
            }
            else if(Standard ==3){
                printf("Your exam is at 9:45 am\n");
        
                }

                else if (Standard ==4){
                    printf("Your exam is  at 10am\n");
                }
                else{
                    printf("Wrong Standard!\n");
                };
return 0;

}