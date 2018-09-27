#include <algorithm>
#include <iterator>
#include <list>
#include <iostream>
using namespace std;

int main() {
  list<int> coll;

  for (int i = 1; i <= 6; ++i) {
    coll.push_front(i);
    coll.push_back(i);
  }

  copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;

  list<int>::iterator end = remove(coll.begin(), coll.end(), 3);

  copy(coll.begin(), end, ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "number of removed elements: " << distance(end, coll.end()) << endl;

  coll.erase(end, coll.end());

  copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;
}