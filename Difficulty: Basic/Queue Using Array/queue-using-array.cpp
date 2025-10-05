#include <vector>

class myQueue {
private:
    int n;                  // capacity
    std::vector<int> arr;   // underlying array
    int front;                // index of front element
    int rear;                 // index of rear element
    int count;                // current number of elements
 
public:
    // Constructor: initialize with capacity n
    myQueue(int capacity) : n(capacity), arr(capacity), front(0), rear(-1), count(0) {}

    // 1 x : enqueue(x)
    void enqueue(int x) {
        if (isFull()) {
            // Overflow: ignore or handle as you prefer
            return;
        }
        rear = (rear + 1) % n;
        arr[rear] = x;
        ++count;
    }

    // 2 : dequeue()
    void dequeue() {
        if (isEmpty()) return;
        // Optional: clear the slot
        arr[front] = 0; // or any sentinel
        front = (front + 1) % n;
        --count;
    }

    // 3 : getFront()
    int getFront() const {
        if (isEmpty()) return -1;
        return arr[front];
    }

    // 4 : getRear()
    int getRear() const {
        if (isEmpty()) return -1;
        return arr[rear];
    }

    // 5 : isEmpty()
    bool isEmpty() const {
        return count == 0;
    }

    // 6 : isFull()
    bool isFull() const {
        return count == n;
    }
};
