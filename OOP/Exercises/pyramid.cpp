#include<iostream>
#include<cmath>
using namespace std;

class Pyramid{

    public:
    //creating constructor
    Pyramid(double l,double w,double h): length_(l),width_(w),height_(h){ //we can use validate because the initaliser list instantly ascribes values to our object
        Validate();
    }

    // creating accessors, notice use of const, as we dont want the accessors to change anything.
    double G_length() const { return length_;}
    double G_width() const { return width_;}
    double G_height() const { return height_;}

    //creating Mutators

    void S_length(double len){
        length_ = len;
        Validate();
    }

    void S_width(double wid){
        width_=wid;
        Validate();
    }

    void S_eight(double hgt){
        height_ = hgt;
        Validate();
    }

    double Volume(){
        return (length_*width_*height_)/3 ;
    }

    double TSA(){
        return (length_*width_)+(length_ * (sqrt((width_*width_/2)+(height_*height_)))) + (width_ * (sqrt((length_*length_/2)+(height_*height_)))) ;
    }

    private:
        double  length_ , width_, height_ ;
        void Validate(){
            if( length_ <=0 || width_ <=0 || height_ <=0){
                throw  invalid_argument("negative declaration");  //learnt about throw,cool
            }
        }
};


int main(){
    Pyramid p1(90.0,90.0,200.0);
    cout<<p1.TSA();
    return 0;
}