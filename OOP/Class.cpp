#include<iostream>
using namespace std;

class Rifle {
//by default all members default to private
    public:

        //the constructor is a function that is used to initialise(construct) an object, has the Same name as the Class
        Rifle(string org,double cal,int mag,string fm){

            //typically avoid ascribing the constructor its own logic
            //Here we use the mutators to to set attributes
            SetOrigin(org);
            SetCal(cal);
            SetMag(mag);
            SetFireMode(fm);

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
        if(cal ==5.56 || cal ==7.62 || cal ==5.45){
            caliber = cal;
            }
            else{
                cout<<"Invalid Caliber"<<endl;
            }
        }
        void SetMag(int mag){ 
        if(mag==30 || mag==45 || mag==20) { 
            mag_size=mag;
            }
        }

        void getInfo(){
            cout<<origin<<"\n"<<caliber<<"\n"<<mag_size<<"\n"<<fire_mode<<endl;
        }
    private:
        string origin;
        int mag_size;
        float caliber;
        string fire_mode;

};



int main(){
    /* pre constructor
    Rifle AK74;
    AK74.SetCal(5.45);
    AK74.SetFireMode("auto");
    AK74.SetMag(30);
    AK74.SetOrigin("Russia");
    AK74.getInfo();
    */
   Rifle ScarH("Belgium",7.62,20,"auto");
   ScarH.getInfo();
    return 0;
}