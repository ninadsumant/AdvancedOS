#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
int main(int argc, char *argv[])
{
	int val;
	if(argc !=2)
		printf("Error :: Too few arguments");
	if((val = fcntl(atoi(argv[1]),F_GETFL,0))<0)
		printf("fcntl error for fd %d",atoi(argv[1]));
	switch(val & O_ACCMODE)
	{
		case O_RDONLY:
			printf("Read Only");
			break;
		case O_WRONLY:
			printf("Write Only");
			break;
		case O_RDWR:
			printf("Read Write ");
			break;
		default:
			printf("Unknown access mode");
	}
/*	if(val & O_APPEND)
		printf(" ,append");
	if(val & O_NONBLOCK)
		printf(" ,nonblocking");
		
	#if defined(O_SYNC)
		if(val & O_SYNC)
			printf(", synchronous write");
	#endif
	#if !defined(_POSIX_C_SOURCE) && deined(O_FSYNC)
		if(val & O_FSYNC)
			printf(" ,synchronous write");
	#endif		
	putchar('\n');*/
	return (0);
}
