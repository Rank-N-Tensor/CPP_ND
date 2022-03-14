/*
C++ supports two notions of immutability:

const: meaning roughly " I promise not to change this value."...The compiler enforces the promise made by const....
constexpr: meaning roughly "to be evaluated at compile time." This is used primarily to specify constants...
*/

#include<iostream>
using namespace std;

int main(){
    int i ;
    cout<<"enter an integer value for i"<<endl;
    cin >> i;
    const int j= i*2; // "j can only be evaluated at run time."
                          // "But I promise not to change it after it is initialized."
    constexpr int k =3 ; // "k, in contrast, can be evaluated at compile time."
    cout << "j = " << j << "\n";
    cout << "k = " << k << "\n";

    return 0;
}