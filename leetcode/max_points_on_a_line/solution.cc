#include "leetcode/max_points_on_a_line/solution.h"
#include <map>

namespace max_points {


int Solution::maxPoints(std::vector<common::Point> &points) {
  if (points.size() <= 2) {
    return points.size();
  }
  int ret = 0;
  for (std::size_t i = 0; i < points.size(); ++i) {
    int curmax = 0;
    int same = 0;
    int vertical = 0;
    std::map<double, int> values;
    for (std::size_t j = i + 1; j < points.size(); ++j) {
      int x = points[i].x - points[j].x;
      int y = points[i].y - points[j].y;
      if (x == 0 && y == 0) {
        same = same == 0 ? 2 : (++same);
      } else if (x == 0) {
        vertical = vertical == 0 ? 2 : (++vertical);
        curmax = curmax > vertical ? curmax : vertical;
      } else {
        double tmp = double(points[i].y - points[j].y) /
                     double(points[i].x - points[j].x);
        if (values.find(tmp) == values.end()) {
          values[tmp] = 2;
        } else {
          values[tmp] = values[tmp] + 1;
        }
        curmax = curmax > values[tmp] ? curmax : values[tmp];
      }
    }
    if (same > 0) {
      curmax = curmax > 0 ? curmax + same - 1 : same;
      ret = ret > curmax ? ret : curmax;
    } else {
      ret = ret > curmax ? ret : curmax;
    }
  }
  return ret;
}

} // namespace max_points
