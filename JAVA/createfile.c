#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard
#include<fcntl.h>//file contol.h

int main()
{
    char Name[30];
    int fd = 0;


    printf("Enter name of file that you want to create : \n");
    scanf("%s",Name);//no need to write the &


    fd = creat(Name ,0777);
    if(fd == -1)
    {
        printf("Unable to create file \n");

    }
    else{
        printf("File gets created with FD %d\n",fd);
    }
    return 0;
}