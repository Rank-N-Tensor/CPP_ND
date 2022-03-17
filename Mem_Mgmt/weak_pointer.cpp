// YOU CAN ONLY CREATE WEAK POINTERS OUT OF SHARED / OTHER WEAK POINTERS 
#include<iostream>
#include<memory>
using namespace  std;


int main(){
    std::shared_ptr<int> sp1(new int);
    cout<<"share count = "<<sp1.use_count()<<endl;
    std::weak_ptr<int> wp1(sp1); //this will not increase the interal ref counter of sp1
    cout<<"share count = "<<sp1.use_count()<<endl;
    std::weak_ptr<int> wp2(wp1);
    cout<<"share count = "<<sp1.use_count()<<endl;
    return 0;
}
