#include<iostream>
#include<memory>
using namespace std;

int main(){

    std::shared_ptr<int> sp1(new int);
    cout<<"count = "<<sp1.use_count()<<endl;
    { // scope of sp2
    std::shared_ptr<int> sp2 =sp1; //now sp2 also points to the int object referenced by sp1. Here the internal counter is increased in both sp1 and sp2
    // obviously both sp1 and sp2 are in scope as they are still being refernenced
    cout<<sp2.use_count()<<" and "<<sp1.use_count()<<endl;
    cout<<sp2.use_count()<<" and "<<sp1.use_count()<<endl;
    }
    cout<<sp1.use_count()<<endl;

    return 0;
}