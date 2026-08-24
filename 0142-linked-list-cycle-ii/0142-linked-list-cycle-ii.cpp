/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode* temp = head;
      ListNode* fast = head;
      while(fast !=nullptr && fast->next !=nullptr){
        fast = fast->next->next;
        temp = temp->next;

        if(temp ==  fast){
            temp=head; 
            while(temp !=fast){
            fast = fast->next;
             temp = temp->next;
             if(temp == fast){
                return temp;
             }
             
            }
            return temp;
        }
      }  
      return nullptr;
    }
};