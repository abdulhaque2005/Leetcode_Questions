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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       unordered_set<int> st;
       for(int x: nums){
        st.insert(x);
       }
       while(head != nullptr && st.count(head->val)){
          ListNode* delNode = head;
          head = head ->next;
       }
         ListNode* temp = head;
         ListNode* prev = nullptr;
        while(temp!=nullptr){
            if(st.count(temp->val)){
               ListNode* DelNode = temp;
                temp = temp->next;
                prev->next = temp;
                 delete DelNode;
           }
           else{
            prev = temp;
            temp = temp->next;
           }
        }
        return head;
    }
};