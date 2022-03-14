#include<iostream>
using namespace std;

class Car{
    public:

        int G_HP(){
            return horsepower;
        }

        string G_Brand(){
            return brand;
        }

        int G_Weight(){
            return weight;
        }

        void S_HP(int hp);
        void S_Weight(int w);
        void S_Brand(char* b); //why pointers?

    private:
        int horsepower;
        double weight;
        string brand; //converting to C-String

};

void Car::S_HP(int hp){
    horsepower=hp;
}
void Car::S_Weight(int w){
    weight =w;
}
void Car::S_Brand(char* b){
    brand = b;
    
}

int main(){

    return 0;
}