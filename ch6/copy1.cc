#include <algorithm>
#include <list>
#include <vector>
#include <deque>
using namespace std;

int main() {
  list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> coll2;

  coll2.resize(coll1.size());
  copy(coll1.cbegin(), coll1.cend(), coll2.begin());

  deque<int> coll3(coll1.size());
  copy(coll1.cbegin(), coll1.cend(), coll3.begin());
}