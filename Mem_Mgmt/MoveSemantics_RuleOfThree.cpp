#include<iostream>
using namespace std;

class Move{
    private:
        int _size;
        int *_datablock;
    
    public:
        Move(size_t size){ //here size refers to the number of contguous blocks of memory , not bytes
            _size=size;
            _datablock=new int[_size];
            cout << "CREATING instance of Move at " << this << " allocated with size = " << _size*sizeof(int)  << " bytes" << std::endl;
        }
        ~Move(){
            delete[] _datablock;
            cout<<"Deleted datablock at "<<this<<endl;
        }
        Move(const Move &source){ //creating a deepcopy
            _size=source._size;
            _datablock= new int[_size];
            *_datablock=*source._datablock;
            cout << "COPYING content of instance " << &source << " to instance " << this << endl;
        }
        Move & operator = (const Move &source){
            if(this==&source){ // to guard against self assignment
                return *this;
            }
            delete[] _datablock;
            _size=source._size;
            _datablock=new int[_size];
            *_datablock=*source._datablock;
            cout << "COPYING  content of instance via = " << &source << " to instance " << this << std::endl;
            return *this;
        }
};
Move createobject(int size){
    Move object(size);
    return object; //return by value
}
/*
bear in mind, whenever a function returns by value, the compiler creates a temporary object as a rvalue
*/

int main()
{
    Move obj1(100); // regular constructor
    Move obj2(obj1); // copy constructor
    Move obj3 = obj1; // still copy constructor
    obj3=obj1;//copy assignment operator, this DOES NOT create a new object like the copy constructor. it merely reassigns content. VVImps.
    Move obj4=createobject(100); //notice how copy constructor's cout is not printed , because the return value of the createobject function is passed as an rvalue to the copy constructor
    Move obj5=createobject(100);
    obj5=obj1;
    return 0;
}
