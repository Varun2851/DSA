// Given the head of a sorted linked list, 
// delete all duplicates such that each element appears only once. Return the linked list sorted as well.

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        while(curr != NULL)
        {
            // Check for duplicate and next node is present or not
            if(curr->next != NULL && curr->val == curr->next->val)
            {
                // Skip 2nd node and move pointer to 3rd node
                curr->next = curr->next->next;
            }else{
                // It means no duplicate found move to 2nd Node
                curr = curr->next;
            }
        }
        
       return head; 
    }
};