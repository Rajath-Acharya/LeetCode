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
    ListNode* reverseList(ListNode* &head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* newHead = reverseList(head->next);
        head -> next -> next = head;
        head -> next = NULL;
        return newHead;
    }
    
    int getDecimalValue(ListNode* head) {
        ListNode* newHead = reverseList(head);
        ListNode* curr = newHead;
        int ans = 0, i = 0;
        while(curr != NULL) {
            int val = curr -> val;
            ans = ans + val * pow(2, i);
            curr = curr -> next;
            i++;
        }
        return ans;
    }
};