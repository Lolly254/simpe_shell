#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - print the parent processing ID
 *
 * Return: 0
 */

int main ()
{
pid_t ppid, pid;
pid = getpid();
ppid = getppid();

printf("processing id is %d and parent PID is %d\n", pid, ppid);
return(0);
}
