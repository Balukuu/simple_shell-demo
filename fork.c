#include <stdio.h>
#include <unistd.h>

int main(void)
{
         pid_t pid;
	 pid_t ppid;

	

         pid = fork();

	 if (pid == -1)
	 {
		 perror("unsuccessful \n");
		 return 1;
	 } 

	 if (pid == 0)
	 {
	    sleep(10);

	 printf("I'm the child\n");
	 }
	 else{
		ppid= getpid(); 
		 printf("parent pid is %u\n", ppid);
	 }

	 return 0;


   
}
