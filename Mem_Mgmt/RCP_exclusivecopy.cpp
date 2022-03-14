#include<iostream>
using namespace std;

class Exclusive_Owner{

    public:
        Exclusive_Owner(){
            mypointer=(int*)malloc(sizeof(int));
            cout<<"allocated\n";
        }
        ~Exclusive_Owner(){
            if (mypointer != nullptr){ // this condition prevents double deletion
                free(mypointer);
                cout<<"freed\n";
            }
        }
        Exclusive_Owner(Exclusive_Owner &source_obj){ //this is not the typical definition, whilst yes, the member is copied, the source is also redefined
            mypointer=source_obj.mypointer; 
            source_obj.mypointer=nullptr; //here,ownership is transferred
        }
        Exclusive_Owner & operator= (Exclusive_Owner &source_obj){
            mypointer=source_obj.mypointer;
            source_obj.mypointer=nullptr;
            return *this;
        }
    private:
        int *mypointer;
};

int main(){
    Exclusive_Owner source;
    Exclusive_Owner destination(source); //here resource handle is transfered

    /*here,since the scope of source is not left because its to be used as a parameter, its
    private member is set to a nullptr and there, its destructor is not called.
    its private member variable no longer points to the memory block, rather , its copy in destination
    does*/
    return 0;
}