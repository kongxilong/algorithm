#include "main/max_points_on_a_line.h"
#include <iostream>
#include <stdlib.h>

using namespace solution;

int main(int argc, char **argv) {
  std::vector<Point> input{Point(0, 0), Point(0, 0),Point{1,1}};
  Solution solution;
  int ret = solution.maxPoints(input);
  std::cout << " same points = " << ret << std::endl;
  return 0;
}
