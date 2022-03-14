#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include<sstream>
using std::vector;
using namespace std;

vector<int> ParseLine(string s)
{
    istringstream streamer(s);
    int i;
    char c;
    vector<int> v;
    while(streamer >> i >> c && c==',')
    {
        v.push_back(i);
    }
    return v;
}

void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      cout << line << "\n";
    }
  }
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

// #include "test.cpp" // For testing.

int main() {
  ReadBoardFile("1.board");
   // TestParseLine(); // For testing.
  // Leave commented out.
  // PrintBoard(board);
}