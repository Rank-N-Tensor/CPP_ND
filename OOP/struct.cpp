#include<iostream>
#include<string>
using namespace std;

struct Rifle
{   
    public:
    //setting accessors
    string GetOrigin(){
        return origin;
    }
    float GetCal(){
        return caliber;
    }
    int GetMag(){
        return mag_size;
    }

    //setting mutators
    void SetCal(float cal){ 
        if(cal ==5.56 || cal ==7.62 || cal ==5.45)
        {caliber = cal;
        }
    }

    void SetOrg(string org){ origin = org;}

    void SetMag(int mag){ 
        if(mag==30 || mag==45) { // this is an invariant. an Invariant is a logical condition that instance attribitues must adhere to
            mag_size=mag;
        }
        }
    private:
    string origin;
    float caliber;
    int mag_size;
};

int main(){

    Rifle M16;
    M16.SetCal(5.56);
    M16.SetMag(30);
    M16.SetOrg("USA");
    cout<<M16.GetCal()<<endl;
    return 0;
}
