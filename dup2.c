/* Illustration of DUP2 function */


#include <fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<errno.h>
#include<sys/socket.h>
#include<netinet/in.h>


main ()
{
  int fd1, fd2;
  if ((fd1 = creat ("a2.txt", O_APPEND | O_WRONLY)) < 0)
    printf ("create error");
	  dup2(fd1,1); // "1" is for write mode which is also a file descriptor write into the file and "0" is for read mode which will read from the file are print on the console
    printf("\nTHIS IS DUP2 function\n");

}

