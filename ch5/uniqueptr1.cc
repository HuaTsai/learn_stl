#include <cerrno>
#include <cstring>
#include <dirent.h>
#include <iostream>
#include <memory>
#include <string>
using namespace std;

class DirCloser {
public:
  void operator()(DIR *dp) {
    if (closedir(dp) != 0) {
      cerr << "OOPS: closedir() failed" << endl;
    }
  }
};

int main() {
  unique_ptr<DIR, DirCloser> pDir(opendir("."));
  //unique_ptr<DIR, int(*)(DIR *)> pDir(opendir("."), closedir);

  struct dirent *dp;
  while ((dp = readdir(pDir.get())) != nullptr) {
    string filename(dp->d_name);
    cout << "process " << filename << endl;
  }
}
