#include <iostream>
using namespace std;

class Student {
public:
  Student(string n, float gpa, int g) {
    S_name(n);
    S_GPA(gpa);
    S_grade(g);
  }

  void S_name(string name) { name_ = name; }

  void S_GPA(double gpa) {
    GPA_ = gpa;
    Validate_GPA();
  }

  void S_grade(int g) {
    grade_ = g;
    Validate_grade();
  }

  void Getinfo() {
    cout << "name :" << name_ << endl;
    cout << "GPA :" << GPA_ << endl;
    cout << "Grade :" << grade_ << endl;
  }

private:
  string name_;
  float GPA_;
  int grade_;
  // creating exception function
  void Validate_GPA() {
    if (0.0 > GPA_ || GPA_> 4.0) {
      throw invalid_argument("our boi can't have this gpa");
      cout << endl;
    }
  }

  void Validate_grade() {
    if (1 > grade_  || grade_> 12) {
      throw invalid_argument("our boi cant be in this grade");
      cout << endl;
    }
  }
};

int main() {

  Student s1("amal", -1.2, 13);
  s1.Getinfo();
  return 0;
}