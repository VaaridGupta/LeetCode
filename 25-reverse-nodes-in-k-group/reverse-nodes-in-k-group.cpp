class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr || k == 1){
            return head ;
        }  

        ListNode* temp = head ;
        int checkcount = 0 ;
        while (temp != nullptr){
            temp = temp -> next ;
            checkcount++ ;
        } 

        if (checkcount < k){
            return head ;
        }

        ListNode* curr = head ;
        ListNode* prev = nullptr ;
        ListNode* next = nullptr ;

        int count = 0 ;
        while(curr != nullptr && count < k ){
            next = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = next ;
            count++ ;
        }

        if(next != nullptr){
            head -> next = reverseKGroup(next , k);
        }

        return prev ;
    }
};