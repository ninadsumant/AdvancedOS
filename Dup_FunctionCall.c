/* Write a program which will implement dup function call */

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
  if ((fd1 = creat ("a1.txt", O_APPEND | O_WRONLY)) < 0)
    printf ("create error");
  fd2 = dup (fd1);
  write (fd2, "Ninad\n", 10);
  write (fd2, "MIT WPU", 10);
}
