#include <iostream>
#include <list>
using namespace std;

int main() {
  list<char> coll;

  for (char c = 'a'; c <= 'z'; ++c) {
    coll.push_back(c);
  }

  for (const auto &elem : coll) {
    cout << elem << ' ';
  }
  cout << endl;
}