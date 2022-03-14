#include<iostream>
using namespace std;

class Jet_Engine{ //abstract class
    public:
        virtual string Thrust() const =0; //pure virtual funct
};

class GE_F414: public Jet_Engine{
    public:
        //notice absence of override keyword
        string Thrust() const{  //here the function Thrust() inherited from base class is overriden cause Engine{} is an abstract class 
            return " the thrust is 98,000.0 KN";
        }
};

class GE_414INS6: public GE_F414{
    public:
        string Thrust() const{  //here the thrust function inherited from GE_F414 is not overriden as the base class is not abstract. Rather its hidden
            return "the thrust is 98 KN with FADEC control";
        }
};

int main(){
    //remeber you can't instantiate an Engine Object
    GE_F414 e1;
    cout<<e1.Thrust()<<endl;
    GE_414INS6 e2;
    cout<<e2.Thrust()<<endl; //Thrust() from GE_F414 is hidden
    return 0;
}