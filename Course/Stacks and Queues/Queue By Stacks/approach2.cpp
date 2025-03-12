#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue{
    stack <int> s1, s2;

    // push opertion is very costly let's optimize it

    void push(int x){
        s1.push(x);
    }

    int top(){
       if(s2.empty() != 0){
            return s2.top();
        }
        else{
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    void pop(){
        if(s2.empty()!=0) s2.pop();
        else{
            while(s1.size()){
                s2.push(s1.top());
                s2.pop();
            }
        }
    }
};

int main()
{



return 0;
}