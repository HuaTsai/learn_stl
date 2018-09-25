#include <iostream>
#include <set>

int main() {
  typedef std::set<int> IntSet;
  IntSet coll;

  coll.insert({3, 1, 5, 4, 1, 6, 2});

  IntSet::const_iterator pos;
  for (pos = coll.begin(); pos != coll.end(); ++pos) {
    std::cout << *pos << ' ';
  }
  std::cout << std::endl;
}