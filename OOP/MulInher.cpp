#include<iostream>
using namespace std;

class Helicopter{
    public: 
        bool Vertical_Takeoff(){
            return true;
        }
};

class Jet{
    public: 
        bool Jet_engine(){
            return true;
        }
};

class F35B:public Helicopter,public Jet{
    public:
        F35B(bool ib,bool tv);
        bool Stealth(){
            return true;
        }
    private:
        bool internalbay_;
        bool thrustvectoring_;
};

F35B::F35B(bool ib,bool tv):internalbay_(ib),thrustvectoring_(tv){}

int main(){
    F35B f1(true,true);
    cout<<f1.Vertical_Takeoff()<<endl;
    cout<<f1.Stealth()<<endl;
    cout<<f1.Jet_engine()<<endl;
    return 0;
}