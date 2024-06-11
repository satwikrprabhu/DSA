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
    ListNode* middleNode(ListNode* head) {
       ListNode* temp=head;
       int count=0;
       int mid;
       while(temp!=NULL){
        count++;
        temp=temp->next;
       }
       mid=count/2;
       int count2=0;
       temp=head;
       while(temp!=NULL){
        if(mid==count2){
            head=temp;
        }
        count2++;
        temp=temp->next;
       }
       return head;
    }
};