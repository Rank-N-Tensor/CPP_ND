#include<iostream>
using namespace std;

class Rifle {
//by default all members default to private
    public:

        //the constructor is a function that is used to initialise(construct) an object, has the Same name as the Class
        Rifle(string org,double cal,int mag,string fm,bool fs,int rof,bool der,string furn,bool detmag): derivative(der),furniture(furn),detachable_mag(detmag){ //initialiser list used as these arent subject to invariants implemented via mutators 2. const variables can only be assigned via initialiser lists

            //typically avoid ascribing the constructor its own logic
            //Here we use the mutators to to set attributes
            SetOrigin(org);
            SetCal(cal);
            SetMag(mag);
            SetFireMode(fm);
            isFireSelect(fs);
            RoF(rof);

        }

        void SetOrigin(string o){
            origin=o;
        }
        void SetFireMode(string fm){
            if (fm=="auto" || fm=="burst" || fm=="semi" || fm=="bolt"){
                fire_mode = fm;
            }
        }

        void SetCal(double cal){ 
        if(cal ==5.56 || cal ==7.62 || cal ==5.45 || cal==7.92){
            caliber = cal;
            }
            else{
                cout<<"Invalid Caliber"<<endl;
            }
        }
        void SetMag(int mag){ 
        if(mag==30 || mag==45 || mag==20 || mag==5) { 
            mag_size=mag;
            }
        }

        void getInfo(){
            cout<<origin<<"\n"<<caliber<<"\n"<<mag_size<<"\n"<<fire_mode<<"\n"<<fireselect<<"\n"<<RateofFire<<"\n"<<derivative<<furniture<<"\n"<<detachable_mag<<endl;
        }

        // will use scope Resolution for the following functions
        void isFireSelect(bool fs); 
        void RoF(int rof); 

    private:
        string origin;
        int mag_size;
        float caliber;
        string fire_mode;
        bool fireselect;
        int RateofFire;
        bool derivative;
        string furniture;     
        bool const detachable_mag ; //probably unchangeable without making a whole new gun :P  
        

};
//using scope res operator to tell the complier that the following functions belong (exist within the scope) of the Rifle class
void Rifle::isFireSelect(bool fs){  
    fireselect=fs;
}
void Rifle::RoF(int rof){
    RateofFire = rof;
}

int main()
{
    Rifle Mk14("USA",7.62,20,"semi",false,90,true,"plastic",true);
    Mk14.getInfo();
    return 0;
}