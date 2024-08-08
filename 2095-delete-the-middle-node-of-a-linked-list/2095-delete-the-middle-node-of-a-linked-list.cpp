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
    ListNode* deleteMiddle(ListNode* head) {
    // edge cases empty list or list with only one node
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    // Initialize slow and fast pointers
    ListNode* slow = head;
    ListNode* fast = head;
    fast = head->next->next;

    // Move fast pointer twice and slow once
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

// At this point, slow points to the middle node Skip the middle node by linking the node before it to the node after it
    // Delete the middle node by skipping it
    slow->next = slow->next->next;
    return head;
    }
};