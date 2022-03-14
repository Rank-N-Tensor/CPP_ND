// THIS EXERCISE IMPLEMENTS PRIVATE METHODS AND STATIC MEMBERS(INCLUDING
// METHODS)
#include <cmath>
#include <iostream>
using namespace std;

class Sphere {

public:
  Sphere(float r) : radius_(r) {

    Valid_radius();
    counter += 1;
  }

  double G_radius() const { return radius_; }

  double G_volume() const { return volume_; }

  // mutator to change radius of sphere
  void ChangeRadius(double rad) {
    radius_ = rad;
    Valid_radius();
  }
  // no constexpr
  static int counter;

  //Static method surface_area , this method can be called without an object being created
  static float Surface_area(int radius){
    return 4*pi_* pow(radius,2);
  }
private:
  // resetting pi_ to be a static member
  static float constexpr pi_ =
      3.14159265358979323846; // constexpr is needed for in-class instantiation
  // what if you dont want constexpr? check in public:

  float radius_;
  float volume_;

  void Valid_radius() { // private method keeping tabs on the range of the
                        // sphere's radius
    if (0 > radius_) {
      throw invalid_argument("no such thing as a sphere with negative "
                             "radius,unless its riemannian space , hmm?");
    } else {
      volume_ = (4 / 3 * pi_ * pow(radius_, 3));
    }
  }
};
int Sphere::counter{0};  // initialising static members in the global scope is preferable

int main() {
  cout<<Sphere::Surface_area(10.6)<<endl;
  Sphere s1(1.23);
  cout << s1.G_volume()<<endl;
  s1.ChangeRadius(2.34);
  cout << "\n" << s1.G_volume();


  return 0;
}