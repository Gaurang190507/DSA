class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> list;
        ListNode* temp = head;

        while(temp != NULL) {
            list.push_back(temp->val);
            temp = temp->next;
        }

        int n = list.size();
        vector<vector<int>> ans;
        int i = 0;

        while(i < n) {
            vector<int> temp;
            int cnt = i + k;

            if(cnt <= n) {
                while(i < cnt) {
                    temp.push_back(list[i]);
                    i++;
                }
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
            }
            else {
                while(i < n) {
                    temp.push_back(list[i]);
                    i++;
                }
                ans.push_back(temp);
            }
        }

        vector<int> fin;

        for(auto v : ans) {
            fin.insert(fin.end(), v.begin(), v.end());
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        for(int i = 0; i < fin.size(); i++) {
            ListNode* newN = new ListNode(fin[i]);
            curr->next = newN;
            curr = newN;
        }

        return dummy->next;
    }
};