#ifndef VEC_HEADER_H
#define VEC_HEADER_H
#include<vector>  // you have to include vector as the identifier isnt defined
using std::vector;
int Add_Sum_Vec(vector<int> v) ;
void Add_one(vector <int> &v); //if the  function requires a reference , you'll have to explicitly mention it

#endif