#include <stdio.h>
#include <unistd.h>

int main(void)
{
         pid_t pid;
	 printf("I'm the Parent\n");

         fork();

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
	 else 
		 printf("I am the parent\n");

	 return 0;


   
}
