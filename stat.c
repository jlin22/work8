#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int x = open("stuffs",O_RDONLY,0777);
  char y[100] = "";
  read(x,y,100);
  struct stat st;
  stat("stuffs", &st);
  int size = st.st_size;
  printf("sizes %d\n", size);
  printf("permissions %d\n", st.st_mode);
  printf("last access %s\n", ctime(&st.st_atime));
  return 0;
}
