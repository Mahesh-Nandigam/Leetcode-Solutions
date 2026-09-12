class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* head = NULL;
        ListNode* tail = NULL;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {

            int sum = carry;

            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newnode = new ListNode(digit);

            if (head == NULL) {
                head = tail = newnode;
            }
            else {
                tail->next = newnode;
                tail = newnode;
            }
        }

        return head;
    }
};