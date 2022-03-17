#include<iostream>
#include<memory>
#include<string>
using namespace std;

class Manager{
    private:
        string _text;
    public:
        Manager(){}//notice , we have 2 constructors, this takes no args
        Manager(string text):_text(text){} // classes can have multiple constructors
        ~Manager(){
            cout<<"Destroying manager object called"<<_text<<endl;
        }
        void SetText(string text){
            _text=text; // to reassing pvt member var
        } 
};

int main(){
    std::unique_ptr<Manager> u_p1(new Manager());
    std::unique_ptr<Manager> u_p2(new Manager(" the second manager object"));
    u_p1->SetText(" first manager object");
    *u_p1=*u_p2; // accesses the Manager object pointed to by the unique pointer .here, text. 
    cout<<"smart poManagerer objects have stack address:\n"<<u_p1.get()<<"\nand\n"<<u_p2.get()<<endl;

}
