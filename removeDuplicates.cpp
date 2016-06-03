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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *current = head;
        ListNode *iter = head;
        while(iter != NULL)
        {
            while(iter != NULL && iter->val == current->val)
            {
                iter = iter->next;
            }
            current->next = iter;
            current = iter;
        }
        return head;
    }
};
