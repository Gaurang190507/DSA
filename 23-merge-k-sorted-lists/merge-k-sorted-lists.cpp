class Solution {
public:

    struct compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*>, compare> pq;

        for(int i = 0; i < lists.size(); i++) {
            if(lists[i] != NULL) {
                pq.push(lists[i]);
            }
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        while(!pq.empty()) {

            ListNode* temp = pq.top();
            pq.pop();

            curr->next = temp;
            curr = curr->next;

            if(temp->next != NULL) {
                pq.push(temp->next);
            }
        }

        return dummy->next;
    }
};