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
    ListNode* getMiddleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL) {
            return true;
        }
        
        ListNode* mid = getMiddleNode(head);
        ListNode* right = reverse(mid);
        ListNode* left = head;
        
        while(right != NULL) {
            if(right->val != left->val) {
                return false;
            }
            right = right->next;
            left = left->next;
        }
        return true;
    }
};