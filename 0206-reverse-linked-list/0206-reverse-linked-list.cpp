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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head; // Pointer to traverse the list
        ListNode* front;       // Temporary pointer to store the next node
        ListNode* prev = NULL;  // Pointer to the previous node

        while (temp != NULL) {
            front = temp->next;   // Store the next node
            temp->next = prev;    // Reverse the link of the current node
            prev = temp;         // Update the previous node
            temp = front;        // Move to the next node
        }

        return prev; // Return the new head of the reversed list

    }
};