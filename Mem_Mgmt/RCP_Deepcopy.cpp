#include<iostream>
using namespace std;

class DeepCopy{
    public:
        DeepCopy(int value){
            mypointer=(int*)malloc(sizeof(int));
            *mypointer=value;
            cout<<"allocatted at : "<<mypointer<<endl;
        }
        ~DeepCopy(){
            free(mypointer);
        }
        DeepCopy(DeepCopy &source){
            mypointer=(int*)malloc(sizeof(int));
            *mypointer=*(source.mypointer);
            cout<<"copy allocatted at : "<<mypointer<<endl;
        }

        DeepCopy & operator = (DeepCopy &source){
            mypointer=(int*)malloc(sizeof(int));
            cout<<"copy allocatted at : "<<mypointer<<endl;
            *mypointer=*(source.mypointer);
            return *this; //returns the object
        }
    private:
        int *mypointer;
};

int main(){
    DeepCopy source(42);
    DeepCopy dest1(source);
    DeepCopy dest2 = dest1;

    //each copying method (constructor and operator) gets its own proprietary memory.
    //it then, just copies the value into the source object. Obviously this method isn't exactly memory optimal.

    return 0;
}