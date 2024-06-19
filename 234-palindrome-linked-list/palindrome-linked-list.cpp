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
    bool isPalindrome(ListNode* head) {
        stack<int> res;
        ListNode* slow = head;
        ListNode* fast = head;
        if(head==NULL || head->next==NULL) return true;
        while(fast!=NULL){
            res.push(slow->val);
            fast=fast->next;
            if(fast){
                slow=slow->next;
                fast=fast->next;
            }
        }
        while(slow!=NULL){
            if(res.top()==slow->val){
                res.pop();
                slow=slow->next;
            }
            else
                return false;
        }
        return true;
    }
};