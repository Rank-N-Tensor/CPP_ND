#include<iostream>
#include<fstream> //file handling header file
using namespace std;
/*
remember, ofstream is the class used to create and write to files.
ifstream is the class used to read from files.
fstream can do both and is used more often
*/

int main()
{


    ifstream f1 ;  //declaration and initialisation together, notice absence of '='
    f1.open("test1.txt");
    if (f1) //to check if file stream has been successfully created
    {
        cout << "success!"<<endl;
        string line;
        while ( getline(f1,line))      // as long as you can get a line , assign it to the line variable
        {
            cout<<line<<endl;
        }
    }
    

}