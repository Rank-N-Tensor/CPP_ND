#include<iostream>
using namespace std;
int main()
{
    int i=5;
    cout<<i<<endl;
    int &j = i;  // here j is just "another name " for i.
    cout<<j<<endl;
    j=10;  // whilst we changed j, j is just a refernce to i, therefore if anything, we've changed i
    cout<<i<<endl;
    cout<<&i<<endl;  //&i is in itself a variable called a pointer. it basically stores the memory adderess of the variable i

     return 0;   
}
