#include <vector>

#include "leetcode/common/list_node.h"

namespace sort_linked_list {
using namespace std;
using ListNode = common::ListNode;
class Solution {
public:
  ListNode *sortList(ListNode *head);
  ListNode *sortList(ListNode *begin,ListNode* end);
  ListNode *select(ListNode *begin,ListNode* end);
};

} // namespace sort_linked_list
