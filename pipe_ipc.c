#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char * argv[]){
int fd[2];
int ret;
char buf[20];
int pid;
ret=pipe(fd);
if(ret < 0){
perror("pipe");
}

pid=fork();
if(pid==0){
printf("child pro\n");
write(fd[1],"asha",5);
}
else{
	printf("parent process\n");
	read(fd[0],buf,5);
	printf("buf s %s\n",buf);
}
}
