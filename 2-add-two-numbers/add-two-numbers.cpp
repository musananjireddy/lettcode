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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*prev= nullptr;
        ListNode*curr = l1;
        ListNode*next = l1;
        while(curr!=nullptr){
            next=next->next;
            curr->next = prev;
            prev=curr;
            curr = next;
        }
        ListNode*pre= nullptr;
        ListNode*cur = l2;
        ListNode*nex = l2;
        while(cur!=nullptr){
            nex=nex->next;
            cur->next = pre;
            pre=cur;
            cur = nex;
        }
        string res1="";
        while(prev!=nullptr){
            res1+=char(prev->val+'0');
            prev=prev->next;
        }
        string  res2 = "";
        while(pre!=nullptr){
            res2+=char(pre->val+'0');
            pre=pre->next;
            
        }
       string str ="";
       int i=res1.size()-1;
       int j = res2.size()-1;
       int carry=0;
       while(i>=0 || j>=0 || carry){
        int x=0;
        int y=0;
        if(i>=0){
            x =res1[i]-'0';
        }
        if(j>=0){
            y = res2[j]-'0';
        }
        int sum  =x+y+carry;
        str+=char((sum%10)+'0');
        carry = sum/10;
        i--;
        j--;
       }
       reverse(str.begin(),str.end());
               int n = str.size();

        ListNode* newval = new ListNode(str[n - 1] - '0');
        ListNode* temp = newval;

        for (int k = n - 2; k >= 0; k--) {
            ListNode* newnode = new ListNode(str[k] - '0');
            temp->next = newnode;
            temp = temp->next;
        }

        return newval;

        
        
    }
};