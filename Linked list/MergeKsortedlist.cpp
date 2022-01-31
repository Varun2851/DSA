
//

// //Let us Merge 2 sorted list. Once, we have returned the head of the Merged List, then we can apply the same logic to merge the current merged list and next list (that is to be merged). 
//And by repeating this merging technique of 2 lists we can merge 'N' lists also.
// So, if we implement this logic for 'N' lists, it will take 'N-1' function calls (function : merge 2 sorted lists).


////////////////////////////////////////// BRUTE FORCE APPROACH//////////////////////////////////
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
            return l1;
        else if(l1==NULL)
            return l2;
        else if(l2==NULL)
            return l1;
        ListNode *head=NULL,*tail=NULL;
        if(l1->val<l2->val){
            head=l1;
            tail=l1;
            l1=l1->next;
        }else{
            head=l2;
            tail=l2;
            l2=l2->next;
        }
        while(l1!=NULL && l2!=NULL){
            if(l1->val<l2->val){
                tail->next=l1;
                tail=l1;
                l1=l1->next;
            }else{
                tail->next=l2;
                tail=l2;
                l2=l2->next;
            }
        }
        if(l1!=NULL)
            tail->next=l1;
        if(l2!=NULL)
            tail->next=l2;
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)
            return NULL;
        ListNode *head=lists[0];
        for(int i=1; i<n; i++){
            head=mergeTwoLists(head,lists[i]);
        }
        return head;
    }
};