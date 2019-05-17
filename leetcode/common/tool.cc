#ifndef __LEETCODE_COMMON_TOOL__
#define __LEETCODE_COMMON_TOOL__

#include <vector>

#include "leetcode/common/list_node.h"

namespace common {
/*
 * Definition for singly-linked list. */
ListNode* Tool::ToListNode(const std::vector<int>& datas){
  if(datas.size() == 0){
    return nullptr_t;
  }
  ListNode* head = nullptr_t;
  ListNode* cur = head;
  for(auto& it : datas){
    ListNode* node = new ListNode();
    cur->val = it;
  }
  return head;
}

} // namespace common

#endif // __LEETCODE_COMMON_TOOL__
