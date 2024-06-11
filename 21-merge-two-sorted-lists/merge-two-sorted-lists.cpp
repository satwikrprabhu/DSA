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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged = new ListNode();
        ListNode* ll = merged;
        while(list1!=NULL && list2!=NULL){
            if(list1->val < list2->val){
                ListNode* prev=new ListNode(list1->val);
                merged->next=prev;
                merged = merged->next;
                list1=list1->next;
            }
            else{
                ListNode* prev=new ListNode(list2->val);
                merged->next=prev;
                merged = merged->next;
                list2=list2->next;
            }
        }
        while(list2!=NULL){
            ListNode* prev=new ListNode(list2->val);
                merged->next=prev;
                merged = merged->next;
                list2=list2->next;
        }
       while(list1!=NULL){
            ListNode* prev=new ListNode(list1->val);
                merged->next=prev;
                merged = merged->next;
                list1=list1->next;
        }
        return ll->next;
    }
};