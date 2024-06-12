#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard
#include<fcntl.h>//file contol.h
//O_RDONLY        Read mode 
//O_WRONLY                  Write mode 
//O_RDWR            Read  and write mode 
int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[30] = {'\0'};


    printf("Enter name of file that you want to open : \n");
    scanf("%s",Name);//no need to write the &


    fd = open(Name ,O_RDWR);
    
    iRet = read(fd,Data,10);

    printf("%d bytes gets successfully read into the file\n",iRet);

    printf("%s\n",Data);
    
    

    close(fd); //closing the file after using it
    return 0;
}