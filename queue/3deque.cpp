// deque = double ended queue

#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);
    cout<<dq.front()<<" "<<dq.back()<<endl; //4 3
    
    dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl; //4 2

}