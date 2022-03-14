#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    //what if you are streaming a mixed stream? here youll have to write a strict conditional.

    string a =("1*2*3,4");
    istringstream streamer(a);
    int n;
    char m;

    while(streamer >>n>>m) //first streams a int and then char, strictly.
    {
        cout<<"streaming: "<<n<<" "<<m<<endl;
    }
    cout<<"stream failed"<<endl;

    /* notice how 4 doesnt appear, its because the conditional strictly requires a int followed by a char, if you  add any char immediatly after 4,itll work*/
    return 0;
}