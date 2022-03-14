#include <iostream>
#include <vector>
using namespace std;

void Print_Board(vector<vector<int>> board)
{
 for (auto row : board)
 {
     for(int el : row)
     {
         cout<<el;
     }
     cout<<"\n";
 }   
}

int main() {
    vector<vector<int>> board ={{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 0, 0, 0, 1, 0}};
    Print_Board(board);  // if a function doesnt return anything then , it cant send anything to cout, thereby causing an error
    return 0;
}