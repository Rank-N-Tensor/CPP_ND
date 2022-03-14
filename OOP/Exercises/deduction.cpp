#include <iostream>
using namespace std;

template <typename T> T Avg(T a, T b) { return (a + b) / 2; }

int main() {
  cout << Avg(12.0, 13.0) << endl; // notice how we didnt specify the type, that is
                               // Avg<int> . the compiler deduced the type on its
                               // own. this helps in further genralisation
  return 0;
}