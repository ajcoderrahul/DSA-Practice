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
    int length(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }
        return count;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = length(head);
        if (head == NULL || n < k) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        int count = 0;

        // 1. Reverse the first k nodes
        while (curr != NULL && count < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        // 2. Recursively reverse the remaining list and connect
        if (forward != NULL) {
            head->next = reverseKGroup(forward, k);
        }

        // 3. 'prev' is the new head of this reversed group
        return prev;
    }
};