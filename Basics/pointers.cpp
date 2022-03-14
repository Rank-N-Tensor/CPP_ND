#include<iostream>
#include<vector>
using namespace std;

void MultiplyBy2(int* number){ //function takes pointer to some variables
    cout<< (*number)*2<<endl; //derefernces and multiplies the value by 2 and prints it 
}

int* DivideBy2(int& number){
    number = number /2;
    return &number;
}

int main()
{

    int i=6;
    int* pointer_to_i = &i; // notice how '&' occurs on the RHS of the "equation". the '*' tells c++ that "pointer_to_i" is a pointer
    cout<< &i<<endl;
    cout<<pointer_to_i<<endl;
    cout<< *pointer_to_i<<endl; //dereferencing

    //WORKING WITH OTHER OBJECTS

    vector<int> v = {1,2,3,4};
    vector<int>* p_v = &v;  //the pointer to an object must be declared with the same type as the object
    cout<<p_v<<endl;
    cout<< (*p_v)[2]<<endl;  // youll have to use parantheses whilst derefencing vectors
    
    
    /* "not behaving as intended"
    vector<int*> vector_with_pointers;
    for(int element : v){
        cout<<element<<endl;
        vector_with_pointers.push_back( &element);
    }
    for(int* p_e: vector_with_pointers){

        cout<<*p_e<<endl;
    }
    */

    int n= 21;
    int* pn= &n;
    MultiplyBy2(pn);

    int m = 88;
    cout<<m<<endl;
    cout<<*(DivideBy2(m))<<endl;

    return 0;
}
