#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4};
    for ( int i : v){       //cool, python-like
        cout<<i<<endl;
    }

    vector<vector<int>> b = {{1, 2},{3, 4},{5, 6}};

    for (auto j: b){  //cant use int as j is a vector       
        for (int k : j){
            cout<<k<<endl;
        }   
    }    
        
}