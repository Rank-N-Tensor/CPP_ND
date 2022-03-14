#include<iostream>
using namespace std;

class Animal{
    public:
        string color_;
        string name_;
        int age_;

        void MakeSound(){
            cout<<"I'm making a sound"<<endl;
        }
};

class Snake: public Animal{
    public: 
        void S_Length(float l){
            length_ = l;
        }
    
    void MakeSound(){
        cout<<"SSSSSSSSSSSSSSSSSSSSSSSSSS"<<endl;
    }

    private:
        float length_;      

};

class Cat: public Animal{

    public:
        void S_height(float h){
            height_=h;
        }

        void MakeSound(){
            cout<<"MEOW"<<endl;
        }
    private:
        float height_;
};

int main(){
    Snake Python;
    Python.age_=3;
    Python.color_="Emerald Green";
    Python.name_="Manpio";
    Python.S_Length(11.2);
    Python.MakeSound();
    
    Cat DomesticSH;
    DomesticSH.name_="Bingus";
    DomesticSH.age_=11;
    DomesticSH.color_="Bronze";
    DomesticSH.S_height(0.2);
    DomesticSH.MakeSound();


    return 0;
}