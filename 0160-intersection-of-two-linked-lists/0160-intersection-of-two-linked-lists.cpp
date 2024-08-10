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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Create a map to store visited nodes from list A
        map<ListNode*, int> mpp;

        // Traverse list A and store nodes in the map
        ListNode* temp = headA;
        while (temp != NULL) {
            mpp.insert(make_pair(temp, 0)); 
            temp = temp->next;
        }

        // Traverse list B and check for intersections
        temp = headB;
        while (temp != NULL) {
            // If the current node from list B is found in the map, it's the intersection node
            if (mpp.find(temp) != mpp.end()) {
                return temp;
            }
            temp = temp->next;
        }
        
        return NULL;
    }
};
