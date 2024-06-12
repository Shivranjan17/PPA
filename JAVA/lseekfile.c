#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard
#include<fcntl.h>//file contol.h
//SEEK_SET    Beginning of file for
//SEEK_CUR    CUrrent position
//SEEK_END    end of the file
int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[30] = {'\0'};


    printf("Enter name of file that you want to open : \n");
    scanf("%s",Name);//no need to write the &


    fd = open(Name ,O_RDWR);
    lseek(fd,10,SEEK_SET); //set the pointer at 10th position from beginning
    
    iRet = read(fd,Data,10);

    printf("%d bytes gets successfully read into the file\n",iRet);

    printf("%s\n",Data);
    
    

    close(fd); //closing the file after using it
    return 0;
}