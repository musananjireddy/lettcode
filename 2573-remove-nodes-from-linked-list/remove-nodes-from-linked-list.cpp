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
    ListNode*reverse(ListNode*head){
        if(head==nullptr){
            return nullptr;
        }
        ListNode*curr = head;
        ListNode*next=head;
        ListNode*prev=nullptr;
        while(curr!=nullptr){
            next=next->next;
            curr->next = prev;
            prev=curr;
            curr=next;
        }
        return prev;

    };
    ListNode* removeNodes(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        head = reverse(head);
        ListNode*curr = head;
        while(curr!=nullptr && curr->next!=nullptr){
            if(curr->val>curr->next->val){
                curr->next= curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return reverse(head);

      
    
        
    }
};