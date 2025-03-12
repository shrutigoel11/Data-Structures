#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// You are given a queue and we have to implment stack functionality using the queue means push and pop by top only
class Stack{
    queue <int> q;
    void push(int x){
        int s= q.size();
        q.push(x);    
        // 4-3 , so push 4 after 3 --> 4-3-4 and then pop 4 from front ----> 3-4
        for(int i =1 ; i<= s; i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        q.pop();
    }

    int top(){
        return q.front();
    }

};

int main()
{



return 0;
}