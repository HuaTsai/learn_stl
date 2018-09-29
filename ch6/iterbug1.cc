#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> coll1;
  vector<int> coll2;

  // runtime error: pos behind coll1.end()
  vector<int>::iterator pos = coll1.begin();
  reverse(++pos, coll1.end());

  for (int i = 1; i <= 9; ++i) {
    coll2.push_back(i);
  }

  // runtime error: overwrite nonexisting elements
  copy(coll1.cbegin(), coll1.cend(), coll2.begin());

  // runtime error: cbegin() and cend() refer to different collections
  copy(coll1.cbegin(), coll2.cend(), coll1.end());
}