# AdvancedOS
Advanced Operating Systems (System calls)
Program for creating file with hole

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

char buff1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char buff2[]="abcdefghijklmnopqrstuvwxyz";

int main()
{ 
	int fd;
	//if((open("1.c",O_RDWR))==-1)
	if((fd=creat("filehole.txt",O_CREAT|O_RDWR|O_APPEND))<0)
		printf("Error creating file!!");
	if(write(fd,buff1,10)!=10)
		printf("Buffer 1 write error");
	if(lseek(fd,16384,SEEK_SET)==-1)
		printf("Error in setting offset");
	if(write(fd,buff2,10)!=10)
		printf("Buffer 2 write error");
	return 0;
}
