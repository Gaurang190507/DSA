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
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;    
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* finHead = head;
        ListNode* revHead = reverseList(head);
        if(n == 1) {
            ListNode* temp = revHead;
            revHead = revHead->next;
            delete temp;
            return reverseList(revHead);
        }
        ListNode* currHead = revHead; 
        int i = 1;
        while(currHead != NULL){
            if(i == n-1){
                ListNode* temp = currHead->next;
                currHead->next = currHead->next->next;
                temp->next = nullptr;
                delete temp;
                break;
            }
            currHead = currHead->next;
            i += 1;    
        }
        ListNode* fin = reverseList(revHead);
        return fin;
    }
};