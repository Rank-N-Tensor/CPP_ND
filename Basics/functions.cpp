#include<iostream>
#include<vector>
using namespace std;

int Add_Vec_el (vector<int> v)
{

int sum =0;
for ( int i : v)
{
    sum=sum+i;
}
return sum;

}

int main(){

    vector<int> v = {1,2,3};
    cout<< Add_Vec_el(v)<<endl;
    }