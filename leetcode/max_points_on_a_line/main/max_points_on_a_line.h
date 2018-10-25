#include <vector>
// defination for a point.
namespace solution {
  using namespace std;
struct Point {
  int x;
  int y;
  Point() : x(0), y(0) {}
  Point(int a, int b) : x(a), y(b) {}
};

class Solution {
public:
  int maxPoints(vector<Point> &points);
};
} // namespace solution

