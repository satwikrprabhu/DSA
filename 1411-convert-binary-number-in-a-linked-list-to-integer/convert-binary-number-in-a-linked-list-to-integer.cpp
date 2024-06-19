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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        string str="";
        while(temp){
            str = str + to_string(temp->val);
            temp=temp->next;
        }
        int ans=0;
        int x=1;
        for(int i=str.length()-1;i>=0;i--){
            if(str[i]=='1') 
                ans = ans + x;
            x=x*2;
        }
        return ans;
    }
};