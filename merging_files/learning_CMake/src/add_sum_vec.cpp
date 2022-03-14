
#include<iostream>
#include<vector>
#include "vec_header.h"
using namespace std;

int Add_Sum_Vec(vector<int> v){  //notice improper order

    int total = 0;
    Add_one(v);

    for(auto i : v){

        total = total + i;
    }    
    return total;
}

void Add_one(vector<int> &v){
        // Note that the function passes a reference to v
    // and the for loop below uses references to 
    // each item in v. This means the actual
    // ints that v holds will be incremented.

    for (int &i : v){

        i+=1;
    }
}


int main(){
    vector<int> v= {1,2,3,4,5,6};
    cout<< Add_Sum_Vec(v)<<endl;
    return 0;
}
