#include <iostream>
using namespace std;

class Point {
public:
  Point(int x, int y);
  int G_x() { return x_; }
  int G_y() { return y_; }

private:
  int x_;
  int y_;
};
Point::Point(int x, int y) : x_(x), y_(y) {}

Point operator+(Point p1,Point p2) { // had to remove & as  it was reference to local variable
  int x3, y3;
  x3 = p1.G_x() + p2.G_x();
  y3 = p1.G_y() + p2.G_y();
  Point p3(x3, y3);
  return p3;
}

int main() {
  Point p1(1, 2), p2(3, 4);
  Point p3 = p1 + p2;
  cout << p3.G_x() << endl;
  cout << p3.G_y() << endl;
  return 0;
}