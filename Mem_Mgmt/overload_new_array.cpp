#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


class Test{
    public:
        Test();
        ~Test();  
        
        void* operator new[](size_t size){ // notice presence of [] , this indicates a contigous sequence of memory blocks. an array
            cout<<"allocating "<<size<<" bytes...allocated\n";
            void *p = malloc(size);
            return p; 
        }

        void operator delete[](void *p){ // to delete a sequence of memory blocks
            cout<<"deallocating..\n";
        }
};

Test::Test(){
    //cout<<"constructing..\n";
}
Test::~Test(){
    //cout<<"destroying..\n";
}

int main(){
    Test *t1= new Test[1000](); //remeber sytnax, this will allocated enough memory(contigous) for 1000 objects of type Test, in the form of an array.
    delete[] t1;
    return 0;
    // in new[] more memory than explictly required has been allocated, why? because in addition to keeping track of the actual memory required, the compiler needs to track the memory blocks themselves
}