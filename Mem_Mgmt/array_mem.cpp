#include<stdio.h>
#include<stdlib.h>

struct S1
{
    int int_type;
    char char_type;
    float float_type;
};


int main(){

    int *p=(int*)malloc(3*sizeof(int)); // remeber this isnt a pointer to an array, its just a pointer to a datastructure in RAM(ROM if RAM is used up). its currently not fragmented,so you can use array commands analogously
    p[0]=1;
    p[1]=2;
    p[2]=3;
    printf("address=%p, last_val =%d ", p,p[2]); 

    //what about multiple data types? here calloc is the go-to.

    S1 *p2 = (S1*)calloc(4,sizeof(S1)); //initialises a memory block of type S1, here you store objects with have the aforementioned attributes
    
    //initialising one object only
    p2[0].char_type='u'; //likewise, not an array, but a contigously allocated memory block
    p2[0].float_type=1.234;
    p2[0].int_type=24;
    printf("address=%p,first_val_=%f",p2,p2[0].float_type);
    return 0;
}