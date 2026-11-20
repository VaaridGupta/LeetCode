class Solution {
public:
    int getLength(ListNode* head){
        int cnt = 0 ;
        while(head!= nullptr){
            cnt++;
            head = head-> next ;
        }
        return cnt ;
    }


    ListNode* middleNode(ListNode* head) {
        int length = getLength(head);
        int mid = (length/2) + 1 ;

        int pos = 1 ;

        ListNode* temp = head ;
        while(pos<mid){
            temp = temp -> next ;
            pos++;
        } 

        return temp ;
        
    }
};