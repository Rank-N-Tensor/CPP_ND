#include<stdlib.h>
#include<iostream>

using namespace std;

class Test{
    public:
    //constructor
    Test(){
        cout << "Allocate memory\n";
        _number=(int*)malloc(sizeof(int));
    }
    //destructor
    ~Test(){
        cout<<"Deallocating\n";
        free(_number);
    }
    void S_Number(int n){
        *_number=n;
        cout<<"number= "<<*_number<<endl;
    }
    private:
    int *_number;
};

int main(){
    /*
    //remember , the constructor isnt being called over here, were simply allocating memory for an object of type Test
    //this fails because no memory is being allocated to _number
    Test *t1=(Test*)malloc(sizeof(Test));
    (*t1).S_Number(5);
    free(t1);
    //this throws a seg fault
    */

    Test *t2 = new Test(); // this calls the constructor
    (*t2).S_Number(5);
    delete t2; // the destructor is evoked when an object goes out of scope or is explictly erased via a call to "delete" 
    return 0;
}