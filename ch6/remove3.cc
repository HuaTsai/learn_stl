#include <algorithm>
#include <iterator>
#include <set>
#include <iostream>
using namespace std;

int main() {
  set<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;

  int num = coll.erase(3);

  cout << "number of removed elements: " << num << endl;

  copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;
}