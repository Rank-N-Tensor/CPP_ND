#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = (int *)malloc(1024); // 1KB of int data
  free(p);
  /*
  extremly important to prevent fragmentation and ensuring memory is available
  in RAM and not delegated to ROM. which is significantly slower*/
  int *p2=(int*)malloc(1024);
  int *p3 = p2; //copying prev pointer
  free(p2);
  free(p3);//throws error . p3 is called a dangling pointer
  return 0;
}