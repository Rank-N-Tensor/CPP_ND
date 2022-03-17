//used to point pointer to new handle
#include<iostream>
#include<memory>
using namespace std;

class Manager{
    public:
        Manager(){}
        ~Manager(){
            cout<<"destroying manager object "<<endl;
        }
};

int main(){
    std::shared_ptr<Manager> sp1(new Manager());
    cout<<sp1.use_count()<<endl;
    cout<<sp1.get()<<endl;
    sp1.reset(new Manager()); //stack address will change as its pointing to a new object 
    cout<<sp1.use_count()<<endl;
    cout<<sp1.get()<<endl;
    

}