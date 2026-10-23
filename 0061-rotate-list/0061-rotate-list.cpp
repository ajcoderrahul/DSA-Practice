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
    
    int length(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* Tail(ListNode* head){
       
        ListNode* temp = head;
        while(temp->next !=NULL){
            temp = temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int n = length(head);
        k = k%n;
        if(k == 0)return head;
        ListNode* tail = Tail(head);
        tail->next = head;
        ListNode* temp = head;
        
        for(int i = 1;i<n-k;i++){
            temp = temp->next;
        }
        ListNode* NewHead = temp->next;
        temp->next = NULL;
        return NewHead;
    }
};