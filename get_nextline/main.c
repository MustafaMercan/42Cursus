#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    
    
    int fd = open("test.txt",O_RDONLY);
    get_next_line(fd);
    //printf("a");
    //printf("test -> %s\n",get_next_line(fd));
    //printf("test -> %s",get_next_line(fd));
    
}