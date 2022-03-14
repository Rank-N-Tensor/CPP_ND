#include <iostream>
using namespace std;

int MultiplyByTwo(int i) {
    i = 2*i;
    return i;
}

int MulByTwo_ref(int &i){
    i = 2*i;
    return i;
}

int main() {
    //Pass by Value
    int a = 5,c=6;
    cout << "The int a equals: " << a << "\n";
    int b = MultiplyByTwo(a);
    int d = MulByTwo_ref(c); // this directly changes the value of c, as opposed to a copy of the value of c
    cout << "The int b equals: " << b << "\n";
    cout << "The int a still equals: " << a << "\n"; //here 'a' is passec by value, 'a' itself remains unchanged
    cout<<d<<"\n"<<c<<endl;
}