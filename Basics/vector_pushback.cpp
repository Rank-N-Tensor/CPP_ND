#include<iostream>
#include<vector>
using namespace std;
using std::vector;  // the prev statement did not cover everything.

int main()
{
    vector<int> v ={1,2,3};
    for (int i=0;i <v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"----------------------------------------------------"<<endl;
    v.push_back(4);

    for (int i=0;i <v.size();i++)
    {
        cout<<v[i]<<endl;
    }  
    return 0;
}