#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#define SHM_KEY 0x1971

int main(const int argc, char* const argv[]) {
int shmid = shmget(SHM_KEY, sizeof(int), 0666 | IPC_CREAT);
if (shmid < 0)
{
	perror("Error: Getting shared memory");
	shmctl(shmid, IPC_RMID, NULL);
	return EXIT_FAILURE;
}
int *shm = (int *) shmat(shmid, NULL, 0);
if (shm ==(int *) - 1)
{
	perror("In parent: Attaching shared memory");
	shmctl(shmid, IPC_RMID, NULL);
	return EXIT_FAILURE;
}

  pid_t fork_value = fork();
      if (fork_value) 
      {
          fprintf(stderr, "In parent: %ld  before executing cat command\n", (long) getpid());
          int wait_stat;
          wait(&wait_stat);
	if (*shm != 1)
	{
	  fprintf(stderr, "\nIn parent: %d after wait system call, now terminating\n", (long) getpid());
	}
      } else {
          fprintf(stderr, "In child: %ld\n", (long) getpid());
	  fprintf(stderr, "In child: %ld now executing cat command\n", (long) getpid());
	if (access(argv[1], F_OK) != -1)
	{
          execl("/bin/cat","cat",argv[1],NULL);
	}
	else
	{
	  *shm = 1;
	  perror("File access failure");
	  return EXIT_FAILURE;
	}
	*shm = 1;
	perror("Error: execution failure");
      }
      shmctl(shmid, IPC_RMID, NULL);
      return EXIT_SUCCESS;
  }
