
#include<iostream>
#include<memory>
using namespace std;

class Manager{
    public:
    std::shared_ptr<Manager> _member;
        Manager(){}
        ~Manager(){
            cout<<"destroying manager object "<<endl;
        }
};

int main(){
    std::shared_ptr<Manager> sp1(new Manager());
    std::shared_ptr<Manager> sp2(new Manager()); 
    sp1->_member=sp2;
    sp2->_member=sp1;
    //we have created a circular ref causing memory leak
    /*basically here, we have sp1 which referneces a manager obj. that obj has a public member shared pointer
    this shared pointer is pointing(managing) sp2. so sp2 cant go out of scope because its being referenced by sp1
    likewise sp1 cant go out of scope because it is being referenced by sp2. thus, circular*/
    

    
    

}