#include <iostream>
#include <string>
using namespace std;

class Jet {
  public:  
  void Print_info() {
    cout << "name= " << name << endl;
    cout << "origin= " << origin << endl;
    cout << "thrust= " << thrust << endl;
    cout << "gen= " << gen << endl;
    cout << "no.of engines = " << engine << endl;
  }

  float net_thrust() { return engine * thrust; }

  Jet(string n, string o, float t, float g, int e) {
    name = n;
    origin = o;
    thrust = t;
    gen = g;
    engine = e;
  }

  string name, origin;
  float thrust, gen;
  int engine;
};

int main() { 

    Jet j1 = Jet("F22","USA", 110.1,5.0,2);
    cout<< j1.net_thrust();
}