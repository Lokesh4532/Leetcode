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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || (head->next==NULL && n==1)){
            return NULL;
        }
        
        //else if
        
        ListNode* temp = head;
        int cnt = 0,cnt1=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int k = cnt - n;
        if(k==0) return head->next;
        temp=head;
        while(temp!=NULL){
            cnt1++;
            if(k==cnt1) temp->next=temp->next->next;
            
            temp=temp->next;
        }
        return head;
    }
};