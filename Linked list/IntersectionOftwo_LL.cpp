#define node ListNode
class Solution {
public:
    int lenght(node*head){
        int cnt = 0;
        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int lengthA = lenght(headA);
        int lenghtB = lenght(headB);

        int diff = abs(lengthA - lenghtB);

        node*temp1 = headA;
        node*temp1 = headB;

        if(lengthA > lenghtB){
            while(diff){
                temp1 = temp1->next;
                diff--;
            }
        }
        else{
            while(diff){
                temp2 = temp2->next;
                diff--;
            }
        }

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1->val;
        
    }
};