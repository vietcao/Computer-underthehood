#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <sys/mman.h>
#include <string.h>
int main(){
  size_t reqSize = (size_t) -3;
  size_t pagesize = (size_t)getpagesize();
  size_t numPages = (reqSize + pagesize - 1) / pagesize;
  size_t totalSize = numPages * pagesize;
  printf("%p\n", reqSize);
  printf("%d\n", totalSize);
  
  
}
