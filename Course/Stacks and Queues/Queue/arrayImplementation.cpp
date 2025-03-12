#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class qImpl{

    int size=10;
    int q[10], currsize=0 , start=-1,end =-1;

    void push(int x){
        if(currsize == 0){
            start=0;
            end=0;
        }
        else{
            end= (end +1) % size;
        }
        q[end]=x;
        currsize++;
    }

    void pop(){
        if( currsize == 0) cout<<"Not possible";
        else if( currsize == 1) {
            int el= q[start];
            start,end=-1;
        }
        else{
            start = (start+1)%size;
        }
        currsize--;
    }

    int top(){
        if(currsize != 0){
            return q[start];
        }
    }
    int size(){
        return currsize;
    }


};

int main()
{

//Implement yourself

return 0;
}