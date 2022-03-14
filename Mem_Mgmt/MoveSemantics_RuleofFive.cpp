//you can think of this as an extension of the shared ownership policy. more specifically, shared ownership

#include<iostream>
using namespace std;

class MoveClass{
    private:
        int _size;
        int *_datablock;
    
    public:
        MoveClass(size_t size){ //here size refers to the number of contguous blocks of memory , not bytes
            _size=size;
            _datablock=new int[_size];
            cout << "CREATING instance of MoveClass at " << this << " allocated with size = " << _size*sizeof(int)  << " bytes" << std::endl;
        }
        ~MoveClass(){
            delete[] _datablock;
            cout<<"Deleted datablock at "<<this<<endl;
        }
        MoveClass(const MoveClass &source){ //creating a deepcopy
            _size=source._size;
            _datablock= new int[_size];
            *_datablock=*source._datablock;
            cout << "COPYING content of instance " << &source << " to instance " << this << endl;
        }
        MoveClass & operator = (const MoveClass &source){
            if(this==&source){ // to guard against self assignment
                return *this;
            }
            delete[] _datablock;
            _size=source._size;
            _datablock=new int[_size];
            *_datablock=*source._datablock;
            cout << "COPYING  content of instance via = from " << &source << " to instance " << this << std::endl;
            return *this;
        }
        
        //implementing the MoveClass constructor.This is extremely similar to the shared copy operation
        MoveClass(MoveClass &&source){ //Notice rvalue reference
           cout<<"Moving instace via c'tor from "<<&source<<"to "<<this<<endl; //notice how you can still use the lvalue ref of the source object
            _datablock=source._datablock;
            _size=source._size;
            //deallocating the original source memory
            source._datablock=nullptr;
            source._size=0;
            //essentially , a shared(in this case an exclusive copy) copy now exists. the Memory has not changed address,merely ownership. Hence, it has been "moved".
        }
        


        //MoveClass assignment operator
        MoveClass & operator =(MoveClass &&source){
            cout<<"Moving via assignment operator from "<<&source<<"to "<< this<<endl;
            if(this==&source){
                return *this;
            }
            delete[] _datablock;
            _datablock=source._datablock;
            _size=source._size;
            source._datablock=nullptr;
            source._size=0;
            return *this;
        }
};

void UsingObject(MoveClass object){
    cout<<"Using object at "<<&object<<endl;
}


//bear in mind, whenever a function returns by value, the compiler creates a temporary object as a rvalue

int main()
{   
  
    MoveClass obj1(100);
    MoveClass obj2(obj1);
    MoveClass obj4=obj2;
    obj4=obj2;
    
   //using move
   MoveClass obj5(200);
   obj5=MoveClass(300); //assignment via rvalue. the rvalue is used directly without expensive copying
   MoveClass obj6 = MoveClass(400); // move constructor not working,class has no errors
   
  /* using lvaues as rvalues. here, the lvalue is passed into the using object function as a rvalue by invoking a move c'tor.
  UsingObject(std::move(obj1));
  */
   return 0;
}