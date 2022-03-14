#include<iostream>
using namespace std;

class Sharecopy{
    public:
        Sharecopy(int value);
        ~Sharecopy();
        Sharecopy(Sharecopy &source);
    private:
        int *mypointer;
        static int count;
};

int Sharecopy::count=0;

Sharecopy::Sharecopy(int value){
    count++;
    mypointer=(int*)malloc(sizeof(int));
    *mypointer=value;
    cout<<"allocated "<<value<<" at: "<<mypointer<<endl;
    }

Sharecopy::~Sharecopy(){
    --count;
    if(count==0){
        free(mypointer);
        cout<<"memory freed at addresss "<< mypointer<<endl;
    }
    else{
        cout<<"instance goes out of scope with count = "<<count<<" "<<endl;
    }
}

Sharecopy::Sharecopy(Sharecopy &source){
    count++;
    mypointer=source.mypointer;
    cout<<"copy number= "<<count<<"value= " <<*source.mypointer<<"at= "<<mypointer<<endl;
}

int main(){
    Sharecopy source(42);
    Sharecopy destination1(source);
    Sharecopy destination2(source);
    Sharecopy destination3(source);
    return 0;

    /*
    execution cycle;
    constructor source()
    constructor d1()
    constructor d2()
    constructor d3()
    destructor source()
    destructor d1()
    destructor d2()
    destructor d3()
    */

}