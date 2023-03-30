#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>       // For Warning....
#include<string.h>

// O_RDONLY     Open for Reading
// O_WRONLY     Open for Writting
// O_RDWR       Open for Reading and Writting



int main()
{
    char Fname[20];
    int fd = 0;     // FD = File Descripter
    char Data[100];
    int Length = 0;

    printf("Enter the file name that you want to Open : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        return -1;
    }
    printf("Enter the data that you want to write in the file : \n");
    scanf(" %[^\n]s",Data);

    Length = strlen(Data);

    // Write(kashat, kay, kiti);
    write(fd, Data, Length);

    return 0;
}