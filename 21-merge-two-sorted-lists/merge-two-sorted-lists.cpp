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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 != NULL) return list2;
        if(list1 != NULL && list2 == NULL) return list1;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val < temp2->val){
                curr->next = new ListNode(temp1->val);
                curr = curr->next;
                temp1 = temp1->next;
            }
            else if(temp1->val == temp2->val){
                curr->next = new ListNode(temp1->val);
                curr = curr->next;
                curr->next = new ListNode(temp2->val);
                curr = curr->next;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else{
                curr->next = new ListNode(temp2->val);
                curr = curr->next;
                temp2 = temp2->next;
            } 
        }
        while(temp1 != NULL) {
            curr->next = new ListNode(temp1->val);
            curr = curr->next;
            temp1 = temp1->next;
        }
        while(temp2 != NULL) {
            curr->next = new ListNode(temp2->val);
            curr = curr->next;
            temp2 = temp2->next;
        }
        return dummy->next;    
    }
};