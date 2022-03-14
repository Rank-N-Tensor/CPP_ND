#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    the following thows an error because void pointers dont tell you the offset at the end of the memory block, e.g int=4B, double = 8B
  void *p =
      malloc(sizeof(int)); // both malloc and calloc return a pointer of type
                           // void. sizeof is used to specify the amount of
                           // memory used to store a certain data type
  printf("address= %p,value=%d\n", p, *p);
  */

 //using casting to solve the previous problem

 int *p = (int*) malloc(sizeof(int)); //currently story 4 bytes for one variable of type int
 int *p2 = (int*)malloc(3*sizeof(int)); // stores 12B for 3 int vars.
 printf("address= %p,value=%d\n", p, *p);
  printf("address= %p,value=%d\n", p2, *p2);

  return 0;
}