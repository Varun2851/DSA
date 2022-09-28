
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
#define node ListNode
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        //finding middle
        node*slow = head;
        node*fast = head;
        
        if(head->next == NULL){ //means having only single node
            return NULL;
        }
        
        while(fast != NULL and fast->next != NULL){
            
            fast = fast->next->next;
            slow = slow->next;
        }
        
        node*temp = head;
        
        while(temp->next != slow){
            temp = temp->next;
        }
        
        temp->next = slow->next;
        delete slow;
        return head;
    }
};