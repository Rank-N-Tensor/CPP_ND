#include<iostream>
using namespace std;

class Test{
    public:
        Test(){
           _pint =(int*)malloc(sizeof(int)); //4 bytes 
        }
        //in main we use a copy constructor, the general syntax is as follows
        // class_name(const Class_name &object_name)();
        ~Test(){
            free(_pint);
        }
        void Own_Address(){
            cout<<"Address on stack = "<<this<<endl; //this keyword. a pointer essentially, returing memory address of a single object
        }
        void Member_Address(){
            cout<<"Managing this memory block: "<<_pint<<endl;
        }
    private:
        int *_pint;
};

int main(){
    Test t1;// remember the scope is the same as stack frame see : https://stackoverflow.com/questions/10080935/when-is-an-object-out-of-scope
    t1.Own_Address(); // we are now out of the  scope of object 1
    t1.Member_Address();
    Test t2(t1); //copy constructor
     t2.Own_Address();
    t2.Member_Address();

}
/*
running this throws the ..
free(): double free detected in tcache 2
Aborted (core dumped) 
..
error, because the copy constructor copies all members including pointer to the memory block allocated
when the first object was created, However, when we left the scope of object 1, its destructor was
called and the memory block was freed.
likwise, the second object's destructor did the same, its just that, the memory block had already
been freed, throwing the error. */