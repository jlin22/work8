#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int x = open("stuffs",O_RDONLY,0777);
  char y[100] = "";
  read(x,y,100);
  printf("%s\n",y);
  struct stat st;
  stat("stuffs", &st);
  int size = st.st_size;
  printf("sizes %d\n", size);
  char z[100] = st.st_mode;
  printf("permissions %s\n", z);
  return 0;
}
