#include <iostream>
#include <memory>

class P {
 public:
  P(){}
  ~P() { std::cout << "delete P" << std::endl; }
};

class Q : public std::enable_shared_from_this<Q> {
 public:
  Q(){}
  ~Q() { std::cout << "delete Q" << std::endl; }
  std::shared_ptr<Q> get_shared() { return shared_from_this(); }
};

int main() {
  P* p = new P();
  std::shared_ptr<P> a(p);
  std::shared_ptr<P> b(p);
  std::shared_ptr<P> c(p);
  Q* q = new Q();
  std::shared_ptr<Q> d(q);
  std::shared_ptr<Q> e = q->get_shared();
  std::shared_ptr<Q> f = q->get_shared();
}

