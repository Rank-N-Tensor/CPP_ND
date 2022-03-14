#include<iostream>
using namespace std;

class Helicopter{

    Helicopter(string eng,int en,float op,int maxal,bool arm): engine_(eng),eng_no_(en), output_(op),max_altitude_(maxal),armed_(arm){
        Valid_engine();
    }


    protected: // using protected because i want attack heli to use these attributes
        string engine_;
        int eng_no_;
        float output_;
        int max_altitude_;
        bool armed_;
        float net_thrust;

        void Valid_engine (){
            if( 0>eng_no_ && eng_no_>2){
                throw invalid_argument("no heli with such engines \n");
            }
        }

        void Thrust(){
            net_thrust= eng_no_ * output_;
        }
};

class Attack_Heli:public Helicopter{  // this is public inheritance , all public and protected members or base class are are public and protected respectively over here
    public:

        Attack_Heli(string eng,int en, float op, int maxal, bool arm,string cg,bool atgm,string rkt, int rktnum):engine_(eng),eng_no_(en),{}



    private:
        string ChinGun_;
        bool ATGM_;
        string rocket_;
        int rocket_num_;

};




int main(){

    return 0;
}