#include <stdio.h>
#include <unistd.h>


int main()
{
  printf("ПРОГРАММА с pid %d и скоро я запущу программы ls -l и больше не вернусь\n", getpid());
  execl("/bin/ls", "ls", "-l", NULL);
  printf("Самая бесполезная строка в C\n");
  printf("Самая бесполезная строка в C номер 2\n");
  if (1)
  {
    printf("Самый бесполезный оператор if в C\n");
  }
  int i = 0;
  while (i < 5)
  {
    printf("это самый БЕСПОЛЕЗНЫЙ цикл В C");
    i += 1;
  }
  printf("Даже return ничего не будет делать!!!");
  printf("есть маленькое но... все они не бесполезны, если execl выполнится с ошибкой...");
  return 0;
}