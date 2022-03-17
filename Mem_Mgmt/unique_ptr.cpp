#include<iostream>
#include<memory> // need to call this header file
using namespace std;

void Raw(){
    int *r_p = new int;
    *r_p=1;
    delete r_p;
}

int main(){
    std::unique_ptr<int> u_p(new int);
    *u_p=2;
    //notice how delete does not need to be called
    return 0;
}