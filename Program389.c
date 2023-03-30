// Programatically Read the file nd display it on screen

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
    
    // read(kuthun, kashat , kiti);
    Length = read(fd,Data,13);

    printf("Data from file is : \n");
    write(1,Data,Length);

    return 0;
}

// 0    // Standard Input Device    Keyboard
// 1       Standard Ouput Devce     Console
// 2       Standard  Error Device   console