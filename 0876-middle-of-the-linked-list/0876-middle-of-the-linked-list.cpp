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
    ListNode* middleNode(ListNode* head) {
        
        //By using Tortoise and Hare Algorithm or Floyd's Cycle-Finding Algorithm
        
        // Initialize two pointers, slow and fast, to the head of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL  && fast->next != NULL){
            slow = slow -> next;   // Move slow pointer one node forward
            fast = fast -> next -> next;  // Move slow pointer one node forward
        }
        return slow;  // When the loop ends, slow will be pointing to the middle node
    }
};