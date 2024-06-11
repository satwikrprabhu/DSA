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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0,kvalue;
        int counter=0;
        while(temp!=NULL){
            if(count==k-1) kvalue=temp->val;
            temp=temp->next;
            count++;
        }
        int m=count-k;
        temp=head;
        counter=0;
        int another=0;
        while(temp!=NULL){
            if(counter==m){
                another=temp->val;
                temp->val=kvalue;
            } 
            temp=temp->next;
            counter++;
        }
        cout<<another;
        temp=head;
        counter=0;
        while(temp!=NULL){
            if(counter==k-1) temp->val=another;
            temp=temp->next;
            counter++;
        }
        return head;
    }
};