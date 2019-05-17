#include "leetcode/sort_linked_list/solution.h"
#include <map>

namespace sort_linked_list {

using namespace std;

ListNode *Solution::sortList(ListNode *head) {
  if (head == nullptr_t || head->next == nullptr_t) {
    return head;
  }
  auto tail = head;
  while (tail->next)
    tail = tail->next;
  return sortList(head, tail);
}

ListNode *Solution::sortList(ListNode *begin, ListNode *end) {
  if(!begin || !end || begin == end){
    return begin;
  }
  ListNode *mid_node = select(begin, end);
  if (mid_node != begin) {
    ListNode *first_end = begin;
    while (first_end->next != mid_node)
      first_end = first_end->next;
    sortList(begin, first_end);
  }
  sortList(mid_node->next,end);
  return begin;
}


ListNode *Solution::select(ListNode *begin,ListNode* end){
  if(begin == end){
    return begin;
  }
  if(!begin || !end){
    return begin;
  }
  ListNode* cur = begin;
  ListNode* next = begin->next;
  while(next){
    if(next->val <= begin->val){
      cur = cur->next;
      auto a = cur->val;
      cur->val = next->val;
      next->val = a;
    }
    next = next->next;
  }
  auto a = cur->val;
  cur->val = begin->val;
  begin->val = a;
  return cur;
}

} // namespace sort_linked_list
