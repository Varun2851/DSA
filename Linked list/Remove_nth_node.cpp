#define node ListNode

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        node*temp = head;
        node*temp1 = head;
        int cnt = 0;
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }
        if(cnt == 1){
            return NULL;
        }
        if(cnt == n){
            return head->next;
        }
        for(int i = 1; i<cnt-n; i++){
            temp1 = temp1->next;
        }
        node*m = temp1->next;
        temp1->next = m->next;
        delete m;
        return head;
    }
};