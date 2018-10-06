#include <forward_list>
#include "print.hpp"
using namespace std;

int main() {
  forward_list<int> list = {1, 2, 3, 4, 5, 97, 98, 99};
  auto posBefore = list.before_begin();
  for (auto pos = list.begin(); pos != list.end(); ++pos, ++posBefore) {
    if (*pos % 2 == 0) {
      break;
    }
  }
  /*
  for (; next(posBefore) != list.end(); ++posBefore) {
    if (*next(posBefore) % 2 == 0) {
      break;
    }
  }
  */
  list.insert_after(posBefore, 42);
  PRINT_ELEMENTS(list);
}