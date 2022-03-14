#include<iostream>
using namespace std;

//Templates are used to manifest generic programming
//generic code is code that is independant of types

template <typename type>
type Sum(type a,type b){
    return a+b;
}

template <typename T>
T Multiply(T a,T b){
    return a*b;
}



int main(){
cout<< Sum<int>(2,3)<<endl;
cout<< Multiply<double>(2.3,3.5)<<endl;
}