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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count=0;
        if(head==NULL || head->next==NULL) return NULL;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int k = count-n;
        count=0;
        temp=head;
        ListNode* prev = NULL;
        while(k!=count){
            prev=temp;
            count++;
            temp=temp->next;
        }
        if(temp->next!=NULL){
            temp->val=temp->next->val;
            temp->next=temp->next->next;
        }
        else{
            if(prev==NULL) return prev->next;
            prev->next=NULL;
        }
        return head;
    }
};