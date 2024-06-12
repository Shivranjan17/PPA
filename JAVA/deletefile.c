#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard
#include<fcntl.h>//file contol.h

int main()
{
    char Name[30];
    


    printf("Enter name of file that you want to delete : \n");
    scanf("%s",Name);//no need to write the &


    unlink(Name ); //this function is used for deleting a file in C language 
    
 
    return 0;
}