#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class stImpl{
    int top=-1;
    int st[10];

    void push(int x){
        if(top > 10) cout<<"Stack is full";
        else{
            top=top+1;
            st[top]=x;
        }
    }

    void pop(){
        if(top == -1) cout<<"Stack is empty";
        else{
            top=top-1;
        }
    }
    
    int top(){
        if(top == -1) cout<<"Stack iss empty";
        return st[top];
    }

    int size(){
        return top+1;
    }

};

int main()
{

// Implement yourself

return 0;
}