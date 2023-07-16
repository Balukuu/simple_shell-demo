#include <stdio.h>
#include <unistd.h>

int main(void)
{
         pid_t pid;
	 printf("before fork i was one\n");

         fork();

	 if (pid == -1)
	 {
		 perror("unsuccessful \n");
		 return 1;
	 }

	 printf("after fork 1 become two\n");

	 return 0;


   
}
