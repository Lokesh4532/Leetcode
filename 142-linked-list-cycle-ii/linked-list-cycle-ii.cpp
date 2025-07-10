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
    ListNode *detectCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;

       

       while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            slow=head;
            int cnt = 0;
            while(slow!=fast){
                cnt++;
                slow=slow->next;
                fast = fast->next;
            }
            return slow;
            // cout<<"tail connects to node at index "<<cnt<<endl;
            // break;
        }
       }

    //cout<<"no cycle"<<endl;
    return NULL;
        
    }
};