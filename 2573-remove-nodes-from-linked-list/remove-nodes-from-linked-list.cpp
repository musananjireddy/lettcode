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
    ListNode* removeNodes(ListNode* head) {
        ListNode*curr = head;
        ListNode*next=head;
        ListNode*prev=nullptr;
        while(curr!=nullptr){
            next=next->next;
            curr->next = prev;
            prev=curr;
            curr=next;

        }
        stack<int>st;
        ListNode*temp=prev;
        while(temp!=nullptr){
            if(!st.empty()){
                if(st.top()<=temp->val){
                    st.push(temp->val);
                }
            }
            else{
                st.push(temp->val);
            }
            temp=temp->next;
        }
        if(st.empty()){
            return head;
        }
        ListNode*newnode = new ListNode(st.top());
        ListNode*startnode = newnode;
        st.pop();
        while(!st.empty()){
            ListNode*node = new ListNode(st.top());
            newnode->next = node;
            st.pop();
            newnode= newnode->next;

        }
        return startnode;
       
    }
};