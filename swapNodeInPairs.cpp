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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *odd, *even, *tmp, *last;
        odd = head;
        even = head->next;
        tmp = even->next;
        even->next = odd;
        odd->next=tmp;
        head = even;
        last = odd;
        odd = odd->next;
        while(odd)
        {
            even = odd->next;
            if(even)
            {
                tmp = even->next;
                last->next = even;
                even->next = odd;
                odd->next = tmp;
                last = odd;
                odd = odd->next;
            }
            else
            {
                break;
            }
        }
        return head;
        
    }
};
