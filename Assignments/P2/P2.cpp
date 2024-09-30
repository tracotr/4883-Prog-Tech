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
 
 // bad
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* r = new ListNode();
        ListNode* head = r;

        while (l1 != NULL && l2 != NULL) {
            r->val = l1->val + l2->val;
            if (l1->next != NULL || l2->next != NULL)
                r->next = new ListNode();
            r = r->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1 != NULL) {
            r->val = l1->val;
            if (l1->next != NULL)
                r->next = new ListNode();
            r = r->next;
            l1 = l1->next;
        }

        while (l2 != NULL) {
            r->val = l2->val;
            if (l2->next != NULL)
                r->next = new ListNode();
            r = r->next;
            l2 = l2->next;
        }

        r = head;

		// fix double digit nodes
        while (r != NULL) {
            if (r->val >= 10) {
                int carry = 1;
                r->val -= 10;
                if (r->next == NULL) {
                    r->next = new ListNode();
                    r->next->val = carry;
                } else {
                    r->next->val += carry;
                }
            }
            r = r->next;
        }

        return head;
    }
};