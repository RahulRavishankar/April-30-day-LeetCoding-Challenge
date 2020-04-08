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
    ListNode* middleNode(ListNode* head) {
        ListNode *prev=head;
        ListNode *curr=head;
        while(curr!=NULL && curr->next!=NULL)
        {
            prev=prev->next;
            curr=curr->next->next;
        }
        return prev;
    }
};
