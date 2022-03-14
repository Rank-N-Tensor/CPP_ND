
#include<iostream>
#include<string>
#include "jet_class.h"
using namespace std;

void Jet::Print_info(){  // since the method is defined outside the class we have to use the scope resolution operator '::'
    cout << "name= " << name << endl;
    cout << "origin= " << origin << endl;
    cout << "thrust= " << thrust << endl;
    cout << "gen= " << gen << endl;
    cout << "no.of engines = " << engine << endl;
}

float Jet::net_thrust(){
    return engine*thrust;
}

