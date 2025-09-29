#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define MAX_COUNT 200

void ParentProcess()
{
  int i = 0;
  while (i < MAX_COUNT)
  {
    printf("РОДИТЕЛЬСКИЙ ПРОЦЕСС, value = %d\n", i);
    i += 1;
  }
  exit(0);
}

void ChildProcess()
{
  int i = 0;
  while (i < MAX_COUNT)
  {
    printf("ДОЧЕРНИЙ ПРОЦЕСС, value = %d\n", i);
    i += 1;
  }
  exit(0);
}

int main()
{

  int pid = fork();

  if (pid < 0)
  {
    perror("fork");
    return 1;
  }
  else if (pid == 0)
  {
    ChildProcess();
  }
  else if (pid > 0)
  {
    ParentProcess();
  }
  return 0;
}