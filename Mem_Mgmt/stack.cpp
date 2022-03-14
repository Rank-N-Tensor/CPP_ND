/*
https://stackoverflow.com/questions/556714/how-does-the-stack-work-in-assembly-language
check the second answer for the better explanation.
*/

/*
one key idea here is that, unlike array allocation, where data is allocated
(traditionally) from vector[0] to vector [n] a stack allocates vector[n] to
vector[0].i.e, backwards.
*/

#include <stdio.h>

void MyFunc() {
  int k = 3;
  printf("3: %p \n", &k);
}

int main() {
  int i = 1;
  printf("1: %p \n", &i);

  int j = 2;
  printf("2: %p \n", &j);

  MyFunc();

  int l = 4;
  printf("4: %p \n", &l);

  return 0;
}