#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

class Test{
    public:
        Test();
        ~Test();

        //overloading new
        void* operator new(size_t size){// creates a memory block od "size" bytes of type size_t
        cout<<"Allocating memory of "<<size<<" byte(s)\n";
        void *p = malloc(size);
        return p; // the overloaded new needs to return the pointer as can be seen in the new.cpp file::ln:36
}

    //overloading delete
    void operator delete(void *p){
        cout<<"deleting memory..\n";
        free(p); // free memory pointed to via pointer p
    }

    /*
    ok i finally have an understanding of how this works.
    essentially, new creates a memory block on the heap,
    then, it creates a pointer to the "first" address within the memory block,
    and it returns that pointer.
    when you use **new constructor()**
    the constructor creates an object in that memory block and the pointer now points to the object of type Class
    hence , Class * poniter_to_object = new Class();
    */

};
Test::Test(){
    cout<<"Constructing....Constructed\n";
}
Test::~Test(){
    cout<<"Destroying....Destroyed\n";
}

int main(){
    Test *t1= new Test(); //notice how the (size_t size) parameter isnt passed to new, the compiler deduces it on its own and allocates the requisite memory
    delete(t1);
    return 0;
    /*
    execution chain:
    1.new
    2.Constructor
    3.Destructor
    4>delete
    */
}