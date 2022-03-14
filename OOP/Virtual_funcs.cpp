#include<iostream>
#include<cmath>
using namespace std;

//using macros to define pi
#define PI 3.14156;

class Shape{        //this is an abstract class as it contains a pure virtual function;no object instantiated;derived classes need to override the vir funcs
    public:
        virtual double Area() const =0; // "=0" means pure virtual function
        virtual double Perimeter() const =0; 
};

class Rectangle : public Shape{
    public:
        Rectangle(double l,double w): length_(l),width_(w){}

        double Area() const override{  //function over-ride
            return length_ * width_;    //need to add override keyword
        }
        double Perimeter() const override{  
            return 2*(length_+width_);
        }

    private:
        double length_, width_;
};

class Circle: public Shape{
    public:
        Circle(double r):radius_(r){}

        double Area() const override{
            return pow(radius_,2) * PI;  // for some reason PI * pow(radius_,2) throws an error
        }

        double Perimeter() const override{
            return 2*radius_*PI;
        }
    private:
        double radius_;
};

int main(){
    //cant initialise a Shape object because its abstract
    Rectangle r1(12.2,14.6);
    cout<<r1.Area()<<endl;
    cout<<r1.Perimeter()<<endl;

    Circle c1(5.64);
    cout<<c1.Area()<<endl;
    cout<<c1.Perimeter()<<endl;
    

    return 0;
}