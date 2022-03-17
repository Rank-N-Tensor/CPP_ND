#include<iostream>
#include<memory>
using namespace  std;


int main(){
    std::shared_ptr<int> sp1(new int);
    cout<<"share count = "<<sp1.use_count()<<endl;
    std::weak_ptr<int> wp1(sp1); //this will not increase the interal ref counter of sp1
    sp1.reset(new int);
    // now the int objects destructor has been called and sp1 points to a new int resource. thus,wpi is invalid because it is pointing to a deallocated resource
    if(wp1.expired()){
        cout<<"wpi is now invalid"<<endl;
    }
    return 0;
}
