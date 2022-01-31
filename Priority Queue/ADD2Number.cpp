class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //create a new linked list in order to store the answer
        ListNode* ans = new ListNode(); 
        //create a pointer which furthers the answer
        //ListNode* ptr = ans;
        ListNode*temp = ans;
        //intialise carry as 0 for first sum
        int carry =0;
        //iterate until each list is empty or carry is 0
        while(l1 || l2 ){
            //intialise sum in every iteration in order to have a unique sum every time
            int sum=0;
            //add values of each list
            if(l1!= NULL){
                sum+= l1->val;
                l1 = l1->next;
            }
            if(l2!= NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            //add previous sum's carry to present sum
            sum += carry;
            //create a new node and store the sum's ones place only 
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next; 
            carry = sum/10; //update carry for the next sum
            
        }
        return ans->next;
    }
};



// Simple Logic :
// Use the given linked lists to store the data
// If one linked list is over (Reached to the end) add the other linked list to the end of it and keep calling it recursively with the carry value if any
// If both linked list reaches to the end i.e. both of them have same size ,
// check
// carry !=0 then [ Create New node ,assign 1 and return]
// else return either of them [Both pointers are NULL]
// Time Complexity : O(Max(l1,l2))
// Space Complexity : O(Max(l1,12))

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
      return  solve(l1,l2,0);
        
    }
    ListNode* solve(ListNode* l1, ListNode* l2,int c)
    {
        if(l1==NULL && l2==NULL)
        {
            if(c)
            return new ListNode(c);
            return l1;
        }
        if(l1==NULL)
        {
            l2->val+=c;
            l2->next=solve(NULL,l2->next,l2->val/10);
            l2->val%=10;
            return l2;
        }
        if(l2==NULL)
        {
          l1->val+=c;
          l1->next=solve(l1->next,NULL,l1->val/10);
          l1->val%=10; 
            return l1;
        }
        l1->val+=(l2->val+c);
        l1->next=solve(l1->next,l2->next,l1->val/10);
        l1->val%=10;
        return l1;
        
    }
    
};