#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// We have to implement queue using two stacks to make front and rear work 

class Queue{
    stack <int> s1, s2;
    //s1-->s2, x-->s1, s2-->s1

    void push (int x){
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop(){
        s1.pop();
    }
    int top(){
        return s1.top();
    }


};

int main()
{



return 0;
}