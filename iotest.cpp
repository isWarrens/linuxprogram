#include<unistd.h>
#include<iostream>
#include<fcntl.h>
#include<string>
#include<sys/types.h>
#include<sys/stat.h>
using namespace std;

int main()
{
	int fd;
	FILE *file;
	char *s = "hello world\n";
	if((fd = open("test1.txt", O_WRONLY|O CREAT,S_IRUSR|S_IWUSR)) == -1){
		cout<<"error open file"<<endl;
		return -1;
	}
	if((fd = open("test2.txt", "w")) == NULL){
		cout<<"write error"<<endl;
		return -1;
	}

	if(fwrite(s,sizeof(char),strlen(s),file)<strlen(s)){
		coout<<"write error in 2"<<endl;
		return -1;
	}

	cout<<"after write"<<endl;
	sleep(15);
	cout<<"after sleep"<<endl;
	close(fd);
	return 0;
	
}
