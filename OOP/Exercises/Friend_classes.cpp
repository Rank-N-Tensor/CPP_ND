#include <iostream>
using namespace std;

class Square{
  public:
     Square(int s):side_(s){}
  private:
    int side_;
    friend class Rectangle; // the "friend class" phrase tells the square class that Rectangle can access private attributes 
};

class Rectangle{
  public:
    Rectangle(const Square& sq): width_(sq.side_), height_(sq.side_){ // you DONT need to call the non-default constructor explicitly because you are no inheriting and declaring a friend class
    }
    int G_Area(){
      return height_*width_;
    }
  private:
    int width_;
    int height_;
};

int main(){
  Square s1(5);
  Rectangle r1(s1);
  cout<<r1.G_Area()<<endl;
 
  return 0;
}