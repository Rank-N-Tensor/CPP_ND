#include<iostream>
#include<string>
#include "jet_class.h"
using namespace std;

int main(){
    Jet j1 = Jet("SU57","RUSSIA",107.9,5.0,2);
    cout<<j1.net_thrust()<<endl;
    j1.Print_info();
    cout<<endl;
    
    return 0;
}