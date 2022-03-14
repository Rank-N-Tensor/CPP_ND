#include<iostream>
using namespace std;

template <typename T>
T Max (T a, T b){
    return a>b ? a:b;
}

template <typename T>
T Min (T a, T b){
    return a<b ? a:b;
}

int main(){
    cout<< Max<int>(12,18)<<endl;
    cout<< Min<double>(2.34,2.339)<<endl;
    return 0;
}