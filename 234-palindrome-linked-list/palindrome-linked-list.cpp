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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return true;
        }
        ListNode*temp = head;
        ListNode*slow = head;
        ListNode*fast = head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;

        }
        ListNode*right = slow->next;
        slow->next = nullptr;
        ListNode*prev = nullptr;
        ListNode*next = nullptr;
        ListNode*curr = right;
        while(curr!=nullptr){
            next=curr->next;
            curr->next = prev;
            prev= curr;
            curr = next;
        }
        ListNode*left = head;
        ListNode*righ = prev;
        while(righ!=nullptr){
            if(righ->val!=left->val){
                return false;
            }
            righ=righ->next;
            left=left->next;
        }
        return true;
        
    }
};