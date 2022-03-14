#include<iostream>
#include<cmath>
using namespace std;


// The override keyword while not necessary is important for preventing silly errors . in essence it behaves as compiler protection 


#define PI 3.14156

class VehicleModel{
    public:
        virtual void Move(double v , double phi)=0; // remember you arent overloading. since its overriding, the function signature needs to remain the same
};

class ParticleModel: public VehicleModel{
    public:
        void Move(double v, double phi) override{
            theta += phi;
            x= v * cos(theta);
            y= v * sin(theta);
        }
        double x,y,theta;      
};

class BicycleModel: public ParticleModel{
    public:
        void Move(double v, double phi)override{  // ParticleModel::Move hidden
            theta += v / L * tan(phi);
            x += v * cos(theta);
            y += v * sin(theta);
        }  
        double L=1; 
};

int main(){
    ParticleModel particle;
    BicycleModel bicycle;
    particle.Move(10, PI / 9);
    bicycle.Move(10, PI / 9);
    cout<<bicycle.x<<endl;
    cout<<bicycle.y<<endl;
    cout<<bicycle.theta<<endl;
    cout<<particle.x<<endl;
    cout<<bicycle.y<<endl;
    cout<<bicycle.theta<<endl;
    return 0;
}