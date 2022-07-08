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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL ||
           head -> next == NULL ||
           head -> next -> next == NULL)
        {
            return head;
        }
        
        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* oddHead = odd;
        ListNode* evenHead = even;
        int cnt = 3;
        ListNode* start = even -> next;
        
        while(start != NULL) {
            if(cnt % 2 == 0) {
                even -> next = start;
                even = even -> next;
            } else {
                odd -> next = start;
                odd = odd -> next;
            }
            cnt++;
            start = start -> next;
        }
        
        odd -> next = NULL;
        even -> next = NULL;
        odd -> next = evenHead;
        return oddHead;
    }
};