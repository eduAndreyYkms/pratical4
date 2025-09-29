#include <unistd.h>

int main()
{
  int pid;
  printf("Оригинальный процесс с  pid %d и ppid %d\n", getpid(), getppid());
  pid = fork();
  if (pid != 0)
  {
    printf("Сейчас родительский процесс с pid %d and ppid %d\n", getpid(), getppid());
    printf("У меня есть дочерний процесс с pid %d\n", pid);
  }
  else
  { /* esli pid==0, this is child process*/
    sleep(5); 
    printf("ДОЧКА ПРОСНУЛАСЬ !!! МОЙ pid %d и ppid %d\n", getpid(), getppid());
  }
  printf("pid %d закончил свою работу.\n", getpid());
  return 0;
}