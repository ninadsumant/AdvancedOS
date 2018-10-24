#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	/*
	int fd;
	
	if(fd=(open("filehole.txt",O_RDWR))<0)
		printf("Error Opening file");
	if((lseek(fd,16384,SEEK_SET))==-1)
		printf("Seek Error");
	return 0; */
	if((lseek(STDIN_FILENO,0,SEEK_CUR))==-1)
		printf("Seek Error");
	else
		printf("SEEKING !!");
		
	return 0;
}
