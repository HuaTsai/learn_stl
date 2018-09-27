#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
using namespace std;

class Person {
 public:
  Person(string f, string l) : firstname_(f), lastname_(l) {}
  string firstname() const {return firstname_;};
  string lastname() const {return lastname_;};
  friend ostream& operator<<(ostream &out, const Person &p) {
    out << p.firstname_ << ", " << p.lastname_ << " " << endl;
  }
 private:
  string firstname_;
  string lastname_;
};

bool personSortCriterion(const Person &p1, const Person &p2) {
  return p1.lastname() < p2.lastname() ||
         (p2.lastname() == p1.lastname() && p1.firstname() < p2.firstname());
}

int main() {
  deque<Person> coll = {Person("a", "a"), Person("a", "b"), Person("b", "a"), Person("b", "b")};
  sort(coll.begin(), coll.end(), personSortCriterion);
  cout << "sorted name" << endl;
  for (auto &elem : coll) {
    cout << elem;
  }
}