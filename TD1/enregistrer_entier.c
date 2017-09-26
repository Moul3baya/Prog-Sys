#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char** argv){

  int fd = open(argv[1], O_WRONLY);
  int pos = atoi(argv[2]);
  int val = atoi(argv[3]);

  lseek(fd, pos, SEEK_END);
  write(fd, &val, sizeof(val));

  return 0;
}
