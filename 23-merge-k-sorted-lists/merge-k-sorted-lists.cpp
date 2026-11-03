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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        vector<int>arr;
        for(int i=0; i<n; i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(arr.begin(),arr.end());
        int x = arr.size();
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        for(int i=0; i<x; i++){
            ListNode* newN = new ListNode(arr[i]);
            curr->next = newN;
            curr = newN;
        }
        return dummy->next;    
    }
};