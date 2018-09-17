#include <chrono>
#include <ctime>
#include <string>

inline std::string asString(const std::chrono::system_clock::time_point &tp) {
  std::time_t t = std::chrono::system_clock::to_time_t(tp);
  std::string ts = ctime(&t);
  ts.resize(ts.size() - 1);
  return ts;
}

inline std::chrono::system_clock::time_point makeTimePoint(int year, int mon,
                                                           int day, int hour,
                                                           int min,
                                                           int sec = 0) {
  struct std::tm t;
  t.tm_sec = sec;
  t.tm_min = min;
  t.tm_hour = hour;
  t.tm_mday = day;
  t.tm_mon = mon - 1;
  t.tm_year = year - 1900;
  t.tm_isdst = -1;
  std::time_t tt = std::mktime(&t);
  if (tt == -1) {
    throw "no valid system time";
  }
  return std::chrono::system_clock::from_time_t(tt);
}