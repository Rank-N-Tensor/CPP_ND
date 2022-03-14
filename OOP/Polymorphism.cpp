#include<iostream>
using namespace std;

class Human{};  //instantiating default class
class Dog{};
class Cat{};

void Hello(){
    cout<<"Hello,World"<<endl;
}

void Hello(Human h1){ //Hello( ) being overloaded to accept different input types. a.k.a reconfiguring
    cout<<"hello, Human"<<endl;
}

void Hello(Cat c1){
    cout<<"meow, cat"<<endl;
}

void Hello(Dog d1){
    cout<<"woof, dog"<<endl;
}

int main(){
    Hello();
    Hello(Human()); //Default initialisation via default constructor of Human class
    Hello(Dog());
    Hello(Cat());
    return 0;
}