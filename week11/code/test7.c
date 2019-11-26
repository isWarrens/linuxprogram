#include "my.h"
int main()
{
	FILE *fp;
	fp=fopen("out.dat","w+");
	int pid1,pid2,pid3,status,rv;
	pid1=fork();
	
	if(pid1<0)
{
	perror("fork failed\n");
	return -1;
}
	else if(pid1==0)
{
	fprintf(fp,"pid=%d,%d",getpid());
	printf("child1 pid =%d\n",getpid());
	sleep(3);
	exit(18);
}
	else
{
	printf("parent fork chid2\n");
	pid2=fork();
	if(pid2<0)
{
	perror("2:failed fork\n");
	return -1;
}
	else if(pid2==0)
{
	fprintf(fp,"pid=%d,%d",getpid());
	printf("child2 pid =%d\n",getpid());
	sleep(5);
	exit(99);
}
	else
{
	printf("parent fork child3\n");
	pid3=fork();
	if(pid3<0)
{
	perror("3:failed fork\n");
	return -1;
	
}
	else if(pid3==0)
{
	fprintf(fp,"pid=%d,%d",getpid());
	printf("child3 pid =%d\n",getpid());
	sleep(2);
	exit(108);
}


	else
{

	printf("parent waiting child end\n");
	rv=wait(&status);
	printf("1:child %d end.exit code is %d\n",rv,WEXITSTATUS(status));
	rv=waitpid(pid1,&status,0);
	rv=0;
	status=0;
	rv=waitpid(pid1,&status,0);
printf("2:child %d end.exit code is %d\n",rv,WEXITSTATUS(status));
	rv=0;
	status=0;
rv=waitpid(pid2,&status,WNOHANG);
printf("3:child %d end.exit code is %d\n",rv,WEXITSTATUS(status));
	return 0;
}
}
}
}










