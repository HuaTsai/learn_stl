#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

class Foo {
 public:
  Foo(tuple<int, float>) {
    cout << "Foo::Foo(tuple)" << endl;
  }
  template <typename... Args>
  Foo(Args... args) {
    cout << "Foo::Foo(args...)" << endl;
  }
};

int main() {
  tuple<int, float> t(1, 2.22);
  pair<int, Foo> p1(42, t);
  pair<int, Foo> p2(piecewise_construct, make_tuple(42), t);
}