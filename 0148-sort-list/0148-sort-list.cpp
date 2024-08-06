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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        //Traversing linkedlist and Storing node value in vector arr
        while(temp!=NULL){
        arr.push_back(temp->val);
        temp = temp->next;
        }

    // Sort the array containing node values
    sort(arr.begin(), arr.end());

    temp = head;
    for(int i = 0; i<arr.size(); i++){
        // Update the node's data with the sorted values
        temp->val = arr[i]; 
        // Move to the next node
        temp = temp->next; 
        }
  
    return head; 
  }
};