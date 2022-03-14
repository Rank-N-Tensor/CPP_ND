#include <iostream>

void add_to_var(int &val){  //one of the prime applications of the lvalue ref , is as a parameter to functions
                            // just like before, the ref point to the same memory location within the stack. thereby, helpin with mem and time optimisation
    val++;

}

int main()
{
    int i = 1; 
    int &j = i; //this is an lvalue ref, it can be considered as an alternate name for the object
    ++i; //i=2
    ++j;//j which is basically i =2 is incremented to 3

    std::cout << "i = " << i << ", j = " << j << std::endl;

    return 0;
}