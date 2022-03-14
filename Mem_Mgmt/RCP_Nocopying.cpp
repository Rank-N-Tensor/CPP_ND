#include<iostream>
using namespace std;
//method one-make copy constructor ans aasgn operator private, declare but not define them
class Nocopy1{
    public:
    Nocopy1(){}
    private:
        Nocopy1(const Nocopy1 &); //copy constructor , declared but not defined
        Nocopy1 &operator =(const Nocopy1 &){} //assignment operator, declared but not defined

};

//method 2= public and explicit marking via delete

class Nocopy2{
    public:
        Nocopy2(){}
        Nocopy2(const Nocopy2 &)= delete;
        Nocopy2 &operator=(const Nocopy2 &)=delete;

};


int main(){
    /* uncomment to test
    Nocopy1 obj1;
    //this directly throws an error as you are trying to access a pvt member func
    Nocopy1 cpy1_obj1(obj1);
    Nocopy1 cpy2_obj1=obj1;

    //method 2

    Nocopy2 obj2;
    //again, intellisense will throw an error because the function has been deleted.
    Nocopy2 cpy1_obj2(obj2);
    Nocopy2 cpy2_obj2(obj2);

    */

    return 0;
}