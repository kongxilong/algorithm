#ifndef __LEETCODE_COMMON_TOOL__
#define __LEETCODE_COMMON_TOOL__

#include <vector>

#include "leetcode/common/list_node.h"

namespace common {
/*
 * Definition for singly-linked list. */
class Tool {
public:
  static ListNode* ToListNode(const std::vector<int>& datas);
};

} // namespace common

#endif // __LEETCODE_COMMON_TOOL__
