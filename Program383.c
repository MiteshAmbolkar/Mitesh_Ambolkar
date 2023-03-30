#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>       // For Warning....

// O_RDONLY     Open for Reading
// O_WRONLY     Open for Writting
// O_RDWR       Open for Reading and Writting

int main()
{
    char Fname[20];
    int fd = 0;     // FD = File Descripter

    printf("Enter the file name that you want to Open : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("File is successfully Opened with FD %d\n",fd);
    }

    return 0;
}