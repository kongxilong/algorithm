#ifndef __LEETCODE_COMMON_POINT__
#define __LEETCODE_COMMON_POINT__

namespace common{
  
// defination for a point.
struct Point {
  int x;
  int y;
  Point():x(0),y(0) {}
  Point(int a, int b) : x(a), y(b) {}
};

} // namespace common

#endif

