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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* res = new ListNode();
        ListNode* ll = res;
        while(temp!=NULL){
            int count = 0;
            if(temp->val==0){
                temp=temp->next;
                while(temp!=NULL && temp->val!=0){
                    count = count + temp->val;
                    temp=temp->next;
                }
                if(count!=0){
                    res->next=new ListNode(count);
                    res=res->next;
                }
            }
        }
        return ll->next;
    }
};