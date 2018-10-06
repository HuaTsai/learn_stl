#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
  multiset<int, greater<int>> coll1;
  coll1.insert({4, 3, 5, 1, 6, 2});
  coll1.insert(5);

  for (int elem : coll1) {
    cout << elem << ' ';
  }
  cout << endl;

  auto ipos = coll1.insert(4);
  cout << "4 inserted as element "
       << distance(coll1.begin(), ipos) + 1 << endl;

  multiset<int> coll2(coll1.cbegin(), coll1.cend());
  copy(coll2.cbegin(), coll2.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;

  coll2.erase(coll2.begin(), coll2.find(3));

  int num;
  num = coll2.erase(5);
  cout << num << " element(s) removed" << endl;

  copy(coll2.cbegin(), coll2.cend(), ostream_iterator<int>(cout, " "));
  cout << endl;
}