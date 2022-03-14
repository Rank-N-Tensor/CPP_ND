#include<stdio.h>
#include<iostream>
using namespace std;

int recurse (int* px){
    cout<<"main:\n"<<px<<endl;
    int a= 4;
    cout<<"local\n"<<&a<<endl;
    cout<<"*****************"<<endl;
    return recurse(px);
}


int main(){
    int x=5;
    int* px = &x;
    recurse(px);
    return 0;
}

/*
last line of output, bear in mind that the addresses will not be the same in every run.
main:
0x7ffec431acec
local
0x7ffec3b1e1f4
*****************
the difference here is roughly 8.1MB which is the stack size on my machine.
*/