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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int countA=0;
        int countB=0;
        while(tempA!=NULL){
            tempA=tempA->next;
            countA++;
        }
        while(tempB!=NULL){
            tempB=tempB->next;
            countB++;
        }
        int ans=abs(countA-countB);
        if(countA>countB){
            while(ans!=0 && headA!=NULL){
                headA=headA->next;
                ans--;
            }
        }
        else{
            while(ans!=0 && headB!=NULL){
                headB=headB->next;
                ans--;
            }
        }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};