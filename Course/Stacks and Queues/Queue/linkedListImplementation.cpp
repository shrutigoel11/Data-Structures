#include <iostream>
#include <bits/stdc++.h>
using namespace std;  // To avoid needing to prefix with std::

class Node {
    int data;
    Node * next;
    Node *start, *end;
    int size=0;

    Node(int x){
        data=x;
        next=NULL;
        start=end=NULL;
    }

    void enqueue(int x){
        Node* temp = new Node(x);
        if(temp == NULL) cout<<"Queue is full";

        else if (start == NULL){
            start= temp;
            end= temp;
        }
        else{
            end->next= temp;
            end=temp;
        }
        size++;

    }

    void dequeue(){
        if(start== NULL) cout<<"Empty queue";
        Node *temp= start;
        start= start->next;
        delete temp;
        size--;
    }
   
};


int main()
{

// Implement yourself

return 0;
}