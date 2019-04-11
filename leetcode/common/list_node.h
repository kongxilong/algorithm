#ifndef __LEETCODE_COMMON_LIST_NODE__
#define __LEETCODE_COMMON_LIST_NODE__

namespace common {
/*
 * Definition for singly-linked list. */
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

} // namespace common

#endif // __LEETCODE_COMMON_LIST_NODE__
