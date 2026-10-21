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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL || k <= 1)return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* previous = &dummy;
        while(true){
            ListNode* temp = previous;
            for(int i = 0;i<k & temp != NULL;i++){
                temp = temp->next;

            }
            if(!temp ) break;
        ListNode* start = previous->next;
        ListNode* nextstart = temp->next;
        
        ListNode* curr = start;
        ListNode* prev = nextstart;
        
        
        while(curr != nextstart){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev= curr;
            curr = forward;
           
        }
        previous->next = temp;
        previous = start;
        }
        return dummy.next;
    }
};