#include "leetcode/common/point.h"
#include "leetcode/max_points_on_a_line/solution.h"

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include "gtest/gtest.h"

namespace max_points {

using Point = common::Point;
TEST(SolutionTest, SimpleTest) {
  std::vector<Point> case0{Point(0, 0), Point(0, 0),Point(1,1)};
  Solution solution;
  EXPECT_EQ(solution.maxPoints(case0),3);
  std::vector<Point> case1{Point(0, 0), Point(0, 2),Point(1,1)};
  EXPECT_EQ(solution.maxPoints(case1),2);
}

}  // namespace max_points
