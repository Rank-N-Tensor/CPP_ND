#ifndef JET_CLASS_H
#define JET_CLASS_H
#include<string>
using namespace std;

class Jet {
  public:  
  void Print_info();
  float net_thrust();

    // using initialiser lists
  Jet(string n, string o, float t, float g, int e) : name(n),origin (o),thrust(t),gen(g),engine(e){  }

  private:
  string name, origin;
  float thrust, gen;
  int engine;
};


#endif