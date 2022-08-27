#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define LOCKMODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

int main()
{
	int fd = open("/tmp/singleFile", O_RDWR | O_CREAT, LOCKMODE);
	if(fd < 0)
	{
		perror("open file failed!");
		exit(-1);
	}
	
	struct flock flc;
	flc.l_type = F_WRLCK;  // write lock
	flc.l_start = 0;
	flc.l_whence = SEEK_SET;
	flc.l_len = 0;		   //lock the whole file
	if(fcntl(fd, F_SETLK, &flc) < 0)
	{
		if(errno == EACCES || errno == EAGAIN)
		{
			printf("This process already runing!\n");
			return 0;
		}
		perror("Set FileLock Failed!");
		exit(1);
	}
	printf("Process will run!\n");
	while(1)
	{
		printf("runing ---\n");
		sleep(1);
	}
	return 0;

}
