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
    void reorderList(ListNode* head) {
        ListNode*temp = head;
        if(temp==nullptr || temp->next==nullptr){
            return;
        }
        ListNode*slow = head;
        ListNode*fast = head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast= fast->next->next;
        }
        ListNode*right = slow->next;
        slow->next = nullptr;
        ListNode*prev = nullptr;
        ListNode*curr = right;
        ListNode*nexty= nullptr;
        while(curr!=nullptr){
            nexty = curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexty;
           
        }
        ListNode*left = head;
        ListNode*righ = prev;
        while(righ!=nullptr){
           ListNode*nextleft =left->next;
           ListNode*nextrigh = righ->next;
           left->next = righ;
           righ->next = nextleft;
           left = nextleft;
           righ = nextrigh;
        }

    }
};