#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

void ReadBoardFile(string file_name)  //directly specifying file type within a function doesnt work , for some reason
{
    fstream file;
    file.open(file_name);
    if (file)
    {
        string line;
        while (getline(file,line))
        {
            cout<<line<<endl;
        }
    }
}

int main()
{
    ReadBoardFile("test1.txt");
    return 0;
}