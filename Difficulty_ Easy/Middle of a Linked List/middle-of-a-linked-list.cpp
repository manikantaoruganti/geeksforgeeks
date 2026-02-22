/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
public:
    int getMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(slow && fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->data;
    }
};



