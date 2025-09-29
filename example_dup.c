#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    
    fd = open("some_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0) {
        perror("open");
        return 1;
    }
    
    dup2(fd, 1);
    
    // Закрываем оригинальный дескриптор файла
    close(fd);
    // Теперь printf будет писать в файл, а не на консоль
    printf("Эта строка попадет в some_output.txt\n");
    printf("И эта тоже!\n");
    
    return 0;
}