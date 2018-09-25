#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {
  list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> coll2;
  copy(coll1.begin(), coll1.end(), coll2.begin());
}