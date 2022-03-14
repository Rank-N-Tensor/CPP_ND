/*
#include<iostream>

class Gun{  // notice the absence of non-default constructor
    protected:
         int mag_;
         float cal_;
};

class AutomaticRifle:public Gun{  // likewise
    protected:
        int FireRate_;
};

class AssaultRifle:public AutomaticRifle{
    public:
        AssaultRifle(int m,float c,int fr,int y):mag_(m), {
            SetYear(y); 
        }

        void SetYear(int year){
            year_ =year;
        }
    private:
        int year_;
};


int main(){
    AssaultRifle a1()
}

*/


#include<iostream>
using namespace std;

class Vehicle{
    public:
        int wheels;
};

class Car:public Vehicle{
    public:
        int seats;
};

class Sedan:public Car{
    public:
        bool trunk;
};

int main(){ 
    Sedan s1;
    s1.trunk=true;
    s1.wheels=4;
    s1.seats=5;
    cout<<s1.seats<<endl;
    return 0;
}