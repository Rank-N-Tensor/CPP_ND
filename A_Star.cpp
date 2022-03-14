#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include<algorithm> // part of STL
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
using std::abs;
using std::sort;

//used to specify node state in board
enum class State {kEmpty, kObstacle,kClosed,kPath,kStart,kFinish}; //1-added kClosed. // 2- added path state

vector<State> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while (sline >> n >> c && c == ',') {
      if (n == 0) {
        row.push_back(State::kEmpty);
      } else {
        row.push_back(State::kObstacle);
      }
    }
    return row;
}

vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<State>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

bool Compare (  const vector<int> node1, const vector<int> node2){ // made vectors into constants

  int f1 = node1[2]+ node1[3];
  int f2 = node2[2] + node2[3];
  return f1>f2;  // code is more time optimal

}
/*
bool CheckValidCell(int x,int y,vector<vector<State>> &board){

bool within_x = (0 <= x <= board.size()); // remember to put in brackets as you are evaluating a conditional
bool within_y =  (0<= y <= board[0].size()); // cool way to get the y limit
if (within_x && within_y){
  if(board[x][y] == State::kEmpty){
    return true;
  }
}
else{
  return false;
}
}
*/

void CellSort(vector<vector<int>> *v) {
  sort(v->begin(), v->end(), Compare);
}

int Heuristic(int x1,int y1,int x2,int y2){  //based off mangattan distance
    
    int cost = abs(x2-x1) + abs(y2-y1);
    return cost;
}

bool CheckValidCell(int x, int y, vector<vector<State>> &grid) {
  bool on_grid_x = (x >= 0 && x < grid.size());
  bool on_grid_y = (y >= 0 && y < grid[0].size());
  if (on_grid_x && on_grid_y)
    return grid[x][y] == State::kEmpty;
  return false;
}




void AddToOpen(int x,int y, int g, int h,vector<vector<int>> &open_list, vector<vector<State>> &grid){ //add the current node to the list of open nodes and marks it as closed on grid
  vector<int> node = {x,y,g,h}; // initialising node as vector
  open_list.push_back(node); // adding node to open list
  grid[x][y]= State::kClosed; // notice pass by reference . this line marks the node as visited i.e, closed.

}

void ExpandNeighbors(const vector<int> &c_node,int goal[2],vector<vector<int>>  &open, vector<vector<State>> &board){ // this function works too
  int cn_x = c_node[0], cn_y = c_node[1],cn_g = c_node[2];
  //loop through neigbors
  int neighbor[4][2] = {{cn_x+1,cn_y},{cn_x-1,cn_y},{cn_x,cn_y+1},{cn_x,cn_y-1}}; //array of neighbors
  for(int i =0; i< 4;i++){ 
    int nn_x=neighbor[i][0],nn_y=neighbor[i][1];
    if(CheckValidCell(nn_x,nn_y,board)){ //error had put in nn_x twice
      int nn_h= Heuristic(nn_x,nn_y,goal[0],goal[1]);
      int nn_g = cn_g +1;
      AddToOpen(nn_x,nn_y,nn_g,nn_h,open,board); // adding neighbor to open list
    }
  }
}



vector<vector<State>> Search(vector<vector<State>> board, int init[2],int goal[2]){ // this functions works 
    int init_x = init[0],init_y = init[1];
    int goal_x = goal[0], goal_y = goal[1];
    int g = 0; // setting up inital traversal cost
    vector<vector<int>> open ={}; // whilst this is a 2D vector, its really just a vector of nodes, its just that the nodes are 1D vectors themselves.
    int h =Heuristic(init_x,init_y,goal_x,goal_y); // heuristic of start node
    AddToOpen(init_x,init_y,g,h,open,board); // adding init node to open list and modifying its values elswhere 
    
    while(open.size() > 0){
       CellSort(&open); // remeber this function accepts a pointer and sorts open in a descending order
      auto curr_node  = open.back();
      open.pop_back(); // removes node from open list
      int x=curr_node[0], y = curr_node[1];
      board[x][y] = State::kPath; // this node is now part of path once its been popped
      
      if (x == goal_x && y== goal_y){
        board[init_x][init_y]= State::kStart;
        board[goal_x][goal_y]= State::kFinish;
        return board;
      }
      ExpandNeighbors(curr_node,goal,open,board);
    }  
   cout<<"No path found"<<"\n";
    return vector<vector<State>> {};
}

string CellString(State cell) {  // used to change each character in the String parsed as a row from State to the special characters
  switch(cell) {
    case State::kObstacle: return "⛰️  ";
    case State::kPath :  return "🚗  ";
    case State::kStart: return "🚦  " ;
    case State::kFinish: return "🏁  ";
    default: return "0   "; 
  }
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}

int main() 
{
    int init[2] = {0,0};
    int goal[2] = {4,5};
    vector<vector<State>> board = ReadBoardFile("1.board");
    vector<vector<State>> solution = Search(board,init,goal);
    PrintBoard(board);
}
