class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // Base case: Empty list or single node
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* odd = head;  // Initialize odd pointer to the head
        ListNode* even = head->next; // Initialize even pointer to the next node
        ListNode* evenhead = head->next;  // Store the head of even nodes

        // Iterate through the list, pairing odd and even nodes
        while (even != NULL && even->next != NULL) {
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }

        // Connect the end of odd list to the head of even list
        odd->next = evenhead;

        return head;
    }
};
