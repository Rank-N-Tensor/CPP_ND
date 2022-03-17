#include<iostream>
#include<memory>
using namespace  std;


int main(){
    // Unique to Shared
    unique_ptr<int>up1(new int);
    shared_ptr<int>sp1 = move(up1); // Rule of Five, move calls the move assignment operatorand moves the raw pointer from up1 to sp1 

    //Weak to shared
    weak_ptr<int>wp1(sp1);
    shared_ptr<int>sp2=wp1.lock(); // to avoid invalid access, lock() ensures that the obj is not deallocated before the move operation is complete

    //Raw from shared/unique
    int* rp1 = sp2.get();
    delete rp1; // throws error because sp2 tries to deallocate the same rp again when it's destructor is called
    return 0;

}
