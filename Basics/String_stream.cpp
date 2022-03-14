// remeber a STREAM is a in/out-flow of data exercised via cin or cout
/*
In C++ strings can be streamed into temporary variables, similarly to how files can be streamed into strings. Streaming a string allows us to work with each character individually.
One way to stream a string is to use an input string stream object 'istringstream' from the <sstream> header.
Once an istringstream object has been created, parts of the string can be streamed and stored using the "extraction operator": >>. The extraction operator will read until whitespace is reached or until the stream fails. 
*/

#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

int main()
{

    string a = ("123456 2 3");
    istringstream  streamer(a); // creating stream object using istringstream
    int n;
    streamer >> n; //extraction operator
    cout<<n<<endl;
    /*
    The istringstream object can also be used as a boolean to determine if the last extraction operation failed - this happens if there wasn't any more of the string to stream, for example. If the stream still has more characters, you are able to stream again
    */
   string b =("234 56 78 1");
   istringstream strm(b);
   int j;
   while (strm){  //remember, this determines only if the LAST extraction op worked.
       strm >> j;
       if(strm){
           cout<<"works!"<<j<<endl;
       }
       else{
           cout<<"Not working :("<<endl;
       }
   }
    cout<<"-----------------------------------------------------------------"<<endl;
   /*
    The extraction operator >> writes the stream to the variable on the right of the operator and returns the istringstream object, so the entire expression 'my_stream >> n' is an istringstream object and can be used as a boolean! Because of this, a common way to use istringstream is to use the entire extraction expression in a while loop 
    */
   string c =("56 789 1234");
   istringstream strm1(c);
   int k;
   while(strm1 >> k){                  
       cout<<"streaming: "<<k<<endl;
   }
   cout<<"stream collapsed "<<endl;

    return 0;
}