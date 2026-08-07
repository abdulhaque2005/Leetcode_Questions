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
    ListNode* deleteDuplicates(ListNode* head) {
    if(head  ==nullptr || head->next== nullptr){
            return head;
        }

    ListNode* head1= new ListNode(0);
    head1->next=head;    
    ListNode* temp = head;
    ListNode* prev = head1;

    while(temp != nullptr && temp->next !=nullptr){
     if(temp->val == temp->next->val){
        while(temp->next != nullptr && temp->val == temp->next->val){
            temp = temp->next;
            prev->next = temp->next;
        }
     }

     else{ 
      prev = temp;
     }
     
      temp = temp->next;  

    }   
    return head1->next;                                 
    }
};