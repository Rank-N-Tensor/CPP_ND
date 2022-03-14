#include<iostream>
#include<cmath>
using namespace  std;

#define pi 3.14159;  //using the macro pre-processor directive to define pi in the global scope


class LineSegment{
    public:
        LineSegment(double l):length_(l){}
        double length_;
};

/*
struct LineSegment{
    public:
        double length_;
};
*/
class Circle:public LineSegment{  //using compostion and inheritance
    public:
        Circle(LineSegment& radius);

        void GetArea();
        //void SetRadius(LineSegment& rad); // refernce  type data can be initialised via a initialiser list alone, so SetRadius() is useless

    private:
        LineSegment &radius_;
        double area_;

        void Area(){
                area_= pow(radius_.length_,2) * pi; //remember radiusis an object who has an attribute length
        }
};


Circle::Circle(LineSegment& radius):LineSegment::LineSegment(radius),radius_(radius){} //use initialiser list for referenced members, check https://stackoverflow.com/questions/21006979/no-default-constructor-exists-for-class-x-inheritance-c

void Circle::GetArea(){
    cout <<area_<<endl;
}

int main(){
    
    LineSegment r1(0.12);
    //r1.length_=0.12;
    cout<<r1.length_<<endl;
    Circle c1(r1);
    c1.GetArea();
    return 0;
}