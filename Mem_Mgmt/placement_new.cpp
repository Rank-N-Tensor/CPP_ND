#include<stdlib.h>
#include<iostream>

using namespace std;

class Lmao{
    public:
        Lmao(){
            cout<<"creating object\n";
     }
     ~Lmao(){
         cout<<"deleting object\n";
         }

};

int main(){
    void *mem = malloc(4*sizeof(Lmao));
    //we have allocated memory to hold data of type Lmao but we havent created an object within it yet
    Lmao *lol = new(mem) Lmao();
    
    cout<<lol<<endl;
    delete lol;
}