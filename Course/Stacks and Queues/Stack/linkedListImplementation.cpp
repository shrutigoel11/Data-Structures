#include <iostream>
#include <bits/stdc++.h>
using namespace std;  // To avoid needing to prefix with std::

class Node {
    int data;
    Node* topNode;  // Renamed to avoid conflict with top() method
    Node* next;
    int size;

public:
    Node(int x) {
        data = x;
        next = NULL;
        topNode = NULL;  // Initialize topNode as NULL
        size = 0;
    }

    // Push method to add a new element to the stack
    void push(int x) {
        Node* temp = new Node(x);
        temp->next = topNode;  // Link the new node to the current top
        topNode = temp;        // Update top to point to the new node
        size++;
    }

    // Pop method to remove the top element from the stack
    void pop() {
        if (topNode != NULL) {  // Check if the stack is not empty
            Node* temp = topNode;
            topNode = topNode->next;  // Move top to the next node
            delete temp;              // Free the memory
            size--;
        } else {
            cout << "Stack is empty!" << endl;
        }
    }

    // Top method to get the data of the top element
    int top() {
        if (topNode != NULL) {
            return topNode->data;  // Return data of the top node
        } else {
            cout << "Stack is empty!" << endl;
            return -1;  // Return an error value when the stack is empty
        }
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return size == 0;
    }

    // Optional method to return the size of the stack
    int getSize() {
        return size;
    }
};


int main()
{

// Implement yourself

return 0;
}