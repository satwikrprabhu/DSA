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
    ListNode* rotateRight(ListNode* head, int k) {
        int i=0,count=0;
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(k>count)
            k=k%count;
        while(i<k){
            head = rotate(head);
            i++;
        }
        return head;
    }

    ListNode* rotate(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        if(head==NULL || head->next==NULL) return head;
        while(temp->next!=nullptr){
            prev=temp;
            temp=temp->next;
        }
        prev->next=nullptr;
        temp->next=head;
        head=temp;
        return head;
    }
};