//Reverse a singly linked list
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *tmp;
        tmp = head->next;
        head->next = NULL;
        ListNode *iter = tmp;
        ListNode *current = head;
        while(iter != NULL)
        {
            tmp = iter->next;
            iter->next = current;
            current = iter;
            iter = tmp;
        }
        return current;
    }
};
