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
        ListNode* temp = head;
        ListNode* prev = head;
        while(temp!=NULL){
            prev=temp;
            if(temp->next==nullptr){
                return head;
            }
            if(temp->val==temp->next->val){
                temp->val=temp->next->val;
                temp->next=temp->next->next;
            }
            else{
               temp=temp->next; 
            }
        }
        return temp;
    }
};