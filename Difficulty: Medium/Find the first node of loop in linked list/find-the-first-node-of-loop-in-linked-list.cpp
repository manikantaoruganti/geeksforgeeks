/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
public:
    int cycleStart(Node* head) {
        Node* slow = head;
        Node* fast = head;

        // Detect cycle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {  // Cycle detected
                slow = head;

                // Find the start of the cycle
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow->data;  // Start of the cycle
            }
        }

        return -1;  // No cycle
    }
};
