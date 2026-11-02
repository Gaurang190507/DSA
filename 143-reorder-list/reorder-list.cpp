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
    void reorderList(ListNode* head) {
        vector<int>arr;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* curr = head;
        int n = arr.size();
        int i=0;
        int j = n-1;
        while(i<=j){
            curr->val = arr[i];
            curr = curr->next;
            i++;
            if(i<=j){
                curr->val = arr[j];
                curr = curr->next;
                j--;
            }    
        }
            
    }
};