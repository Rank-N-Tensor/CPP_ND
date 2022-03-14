#include<iostream>
using namespace std;

class BankAccount{

    public:

        BankAccount(string n,int an,double af,string t){ //not using initialiser lists for this exercise
            S_Type(t);
            S_AvailableFunds(af);
            S_AccoutNumber(an);
            S_Name(n);
        }

        int G_AccountNumber(){
            return AccountNumber;
        }

        double G_AvailableFunds(){
            return AvailableFunds;
        }

        string G_Name(){
            return Name;
        }
        
        string G_Type(){
            return Type;
        }

        void S_AccoutNumber(int accnum);
        void S_AvailableFunds(double funds);
        void S_Name(string n);
        void S_Type(string t);

    private:
        int AccountNumber;
        double AvailableFunds;
        string Type;
        string Name;

};

void BankAccount::S_AccoutNumber(int accnum){
    if(01<accnum<99999){
    AccountNumber=accnum;
    }
    else{
        cout<<"Enter valid info"<<endl;
    }
}

void BankAccount::S_AvailableFunds(double funds){
    if(500<funds<2.0e+14){
    AvailableFunds = funds;
    }
    else{
        cout<<"Enter valid info"<<endl;
    }
}

void BankAccount::S_Name(string n){
    if(n.size()<30){
    Name =n;
    }
    else{
        cout<<"Enter valid info"<<endl;
    }
}

void BankAccount::S_Type(string t){
    if( t=="savings" || t=="current"){
    Type =t;
    }
    else{
        cout<<"Enter valid info"<<endl;
    }
}

int main(){
    BankAccount b1("adi",01,14000000000000.0,"lol_account");
    cout<<b1.G_AvailableFunds()<<endl;

}