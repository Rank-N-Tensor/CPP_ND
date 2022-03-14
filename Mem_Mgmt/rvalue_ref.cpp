#include <iostream>

void myFunction(int &val)
{
    std::cout << "val = " << val << std::endl;
}

int main()
{
    int j = 42;
    myFunction(j);
    //passing rvalue as argument
   // myFunction(42); // you cant pass this as an argument, because the parameter is a lvalue

    int k = 23; 
    //rvalue arg
    //  myFunction(j+k);
    /*
    this error is intresting, j and k are variables and therefore, technially lvalues
    however, at compile time, the compiler creates a temporary obj to store j+k in, thereby making
    it a rvalue
    */

   //rvalue ref    
    int l = 1; //l created as an lvalue , 1 is the rvalue. its a temp obj whose value is copied to the memory address of l
    int m = 2; //likewise
    int n = l + m; /*here,n is a lvalue. however, here
    */
    int &&o = l + m; 

    std::cout << "m= " << m << ", l = " << l << std::endl;


    return 0; 
}