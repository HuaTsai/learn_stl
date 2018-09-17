#include <string>
#include <fstream>
#include <memory>
#include <cstdio>

class FileDeleter {
 public:
  FileDeleter (const std::string& fn) : filename(fn) {}
  void operator() (std::ofstream* fp) {
    fp->close();
    std::remove(filename.c_str());
  }
 private:
  std::string filename;
};

int main() {
  std::shared_ptr<std::ofstream> fp(new std::ofstream("tmpfile.txt"), 
      FileDeleter("tmpfile.txt"));
}