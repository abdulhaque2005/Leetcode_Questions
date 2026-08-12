/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
      ListNode* temp = head;
      ListNode* prev = nullptr;
  if(head ==nullptr || head->next ==nullptr){
    return head;
  }
      while(temp !=nullptr){
      ListNode* next = temp->next;
       temp->next  = prev;
       prev = temp;
       temp =  next;
      }
     
     head = prev;
     temp = head;
     prev = nullptr;
     int maxNode = head->val;
     while(temp != nullptr){
      if(temp->val >= maxNode){
        prev = temp;
        maxNode = temp->val;
        temp = temp->next;
      }
      else{
       prev->next = temp->next;
       temp = temp->next;
       }
     }


   prev = nullptr;
   temp = head;
  while(temp != nullptr){
    ListNode* next = temp->next;
    temp->next = prev;
    prev = temp;
    temp = next;
  }

  return prev;

    }
};