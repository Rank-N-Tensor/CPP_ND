#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = (int *)malloc(2 * sizeof(int));
  p[0] = 1;
  p[1] = 2;
  // reallocating more memory
  p = (int *)realloc(p, 5 * sizeof(int)); // allocating 20B
  p[2] = 3;
  p[3] = 4;
  p[4] = 5;

  // reallocating- less memory

  p = (int *)malloc(
      3 *
      sizeof(int)); // ok,this is important. even though the reallocated size
                    // refered to via pointer,p is of 12B. that doesnt mean p[3]
                    // and p[4] have been deleted, rather, those cells still
                    // have the same address and value. its just that , those
                    // cells are no longer locked, that is, they are now
                    // available for reallocation with different data, which
                    // p[0:2] arent because they are still "protected".
                    //bear in mind, doing this is extremely dangerous.
   printf("address=%p,val=%d\n",p,*(p));//remeber the pointer pointing to an address block actually points to the first element within the block        
   printf("address=%p,val=%d\n",p+1,*(p+1)); //p[1]  
   printf("address=%p,val=%d\n",p+2,*(p+2));  
   printf("address=%p,val=%d\n",p+3,*(p+3));// risky  ,this address is free real estate and you are a trespasser.
   printf("address=%p,val=%d\n",p+4,*(p+4));//risky           
}