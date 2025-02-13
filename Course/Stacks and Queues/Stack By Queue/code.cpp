#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack{
    queue <int> q;
    void push(int x){
        int s= q.size();
        q.push(x);    
        // 4-3 , so push 4 after 3 --> 3-4-3 and then pop 3 from front ----> 4-3 
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