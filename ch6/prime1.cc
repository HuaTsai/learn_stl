#include <list>
#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;

bool isPrime(int number) {
  number = abs(number);
  if (number == 0 || number == 1) { return true; }
  int divisor;
  for (divisor = number / 2; number % divisor != 0; --divisor) {}
  return divisor == 1;
}

int main() {
  list<int> coll;

  for (int i = 24; i <= 30; ++i) {
    coll.push_back(i);
  }

  list<int>::const_iterator pos;
  pos = find_if(coll.cbegin(), coll.cend(), isPrime);

  if (pos != coll.end()) {
    cout << *pos << " is first prime number found" << endl;
  } else {
    cout << "no prime number found" << endl;
  }
}