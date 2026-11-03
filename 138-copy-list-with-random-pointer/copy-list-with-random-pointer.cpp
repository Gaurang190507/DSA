/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> visitedNode;

    Node* copyRandomList(Node* head) {

        if (head == NULL) {
            return NULL;
        }

        if (visitedNode.find(head) != visitedNode.end()) {
            return visitedNode[head];
        }

        Node* node = new Node(head->val);

        visitedNode[head] = node;

        node->next = copyRandomList(head->next);

        node->random = copyRandomList(head->random);

        return node;
    }
};