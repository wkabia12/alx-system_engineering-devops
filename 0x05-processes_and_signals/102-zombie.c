#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
/**
 *infinite_while - creates infinite while loop
 *Return:0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 *main - enty point
 *Return:0
 */
int main(void)
{
	int i = 0, pid = 0;

	for (; i < 5; i++)
	{
		pid = fork();
		if (pid > 0)
			printf("Zombie process created, PID %i\n", pid);
		else
			exit(0);
	}
	infinite_while();
	return (0);
}
