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
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL || k == 0) {
            return head;
        }
        ListNode* curr = head;
        int l = 1;
        
        while(curr -> next != NULL) {
            curr = curr -> next;
            l++;
        }
        // curr will point to last element
        
        curr -> next = head; // join last node with first
        
        k = k % l;
        k = l - k; // kth node
        
        while(k != 0) {
            curr = curr -> next;
            k--;
        }
        head = curr -> next;
        curr -> next = NULL;
        
        return head;
    }
};