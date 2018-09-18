#include <array>
#include <string>
#include <iostream>
using namespace std;

int main() {
  array<string, 5> coll = { "hello", "world" };

  for (int i = 0; i < coll.size(); ++i) {
    cout << i << ": " << coll[i] << endl;
  }
}