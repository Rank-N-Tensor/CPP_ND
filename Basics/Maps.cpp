#include<iostream>
#include<vector>
#include<unordered_map> // this is the header file to include unordered maps(hash tables)
#include<string>
using namespace std;
int main(){
    string key = "tank";
    string key2="fighter_jet";
    string t_1 = "M1 Abrams";
    string t_2 = "Leopard 2A7";
    string t_3 = "T90";
    string t_4 = "Arjun mk2";
    string t_5 = "type 99", t_6 = "type 10";
    string f_1="F22",f_2="eurofighter typhoon",f_3="su57",f_4="tejas mk1a",f_5="j20",f_6="shinshin";

    unordered_map <string,vector<string>> combat_vehicle;

    if(combat_vehicle.find(key) == combat_vehicle.end()){  // why? because , the if statement checks if the key "tank" exist in the dictionary(map). however since it obviously doesnt(as the map is empty) it just comes to the end of the map
        cout<<"key  doesnt exist, adding now"<<endl;
        combat_vehicle[key]= vector<string> {t_1,t_2,t_3,t_4,t_5,t_6}; // efficient way to declare
        combat_vehicle[key2]= vector<string> {f_1,f_2,f_3,f_4,f_5,f_6};
    }  
    cout<<key<<endl;
    auto tanks_of_the_world = combat_vehicle[key];
    for (string tank:tanks_of_the_world){
        cout<<tank<<endl;
    }
    cout<<key2<<endl;
    auto fighters_of_the_world = combat_vehicle[key2];
    for(string jets:fighters_of_the_world){

        cout<<jets<<endl;
    }
    return 0;
}