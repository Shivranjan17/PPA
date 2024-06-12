#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard
#include<fcntl.h>//file contol.h
#include<string.h> //for strlen() function
//O_RDONLY        Read mode 
//O_WRONLY                  Write mode 
//O_RDWR            Read  and write mode 
int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[] = "Marvellous Infosystems";


    printf("Enter name of file that you want to open : \n");
    scanf("%s",Name);//no need to write the &


    fd = open(Name ,O_RDWR);

    iRet = write(fd,Data,strlen(Data));//strlen  is used to get length of string till NULL character 22 chya jagevar he lihu shakto

    printf("%d bytes gets successfully written into the file\n",iRet);
    
    

    close(fd); //closing the file after using it
    return 0;
}