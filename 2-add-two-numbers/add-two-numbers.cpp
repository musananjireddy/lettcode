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
        string res1="";
        while(l1!=nullptr){
            res1+=char(l1->val+'0');
            l1=l1->next;
        }
        string  res2 = "";
        while(l2!=nullptr){
            res2+=char(l2->val+'0');
            l2=l2->next;
            
        }
       string str ="";
       int i=0;
       int j = 0;
       int carry=0;
       while(i<res1.size() || j<res2.size() || carry){
        int x=0;
        int y=0;
        if(i<res1.size()){
            x =res1[i]-'0';
        }
        if(j<res2.size()){
            y = res2[j]-'0';
        }
        int sum  =x+y+carry;
        str+=char((sum%10)+'0');
        carry = sum/10;
        i++;
        j++;
       }

        ListNode* newval = new ListNode(str[0] - '0');
        ListNode* temp = newval;

        for (int k = 1; k<str.size(); k++) {
            ListNode* newnode = new ListNode(str[k] - '0');
            temp->next = newnode;
            temp = temp->next;
        }

        return newval;

        
        
    }
};