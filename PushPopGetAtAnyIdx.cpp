#include<iostream>
#include<queue>
using namespace std;

void push(int idx,int ele,queue<int>& q){
    int n=q.size();
    for(int i=1;i<=idx;i++){
        q.push(q.front());
        q.pop();
    }
    q.push(ele);
    for(int i=1;i<=n-idx;i++){
        q.push(q.front());
        q.pop();
    }
    
}
void uda(int idx,queue<int>& q){
    int n=q.size();
    for(int i=1;i<=idx;i++){
        q.push(q.front());
        q.pop();
    }
    q.pop();
    for(int i=1;i<n-idx;i++){
        q.push(q.front());
        q.pop();
    }

    
}
void get(int idx,queue<int>& q){
    int n=q.size();
    for(int i=1;i<=idx;i++){
        q.push(q.front());
        q.pop();
    }
    cout<<q.front()<<endl;
    for(int i=1;i<=n-idx;i++){
        q.push(q.front());
        q.pop();
    }
    
}

void display(queue<int>& q){
    int n=q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}


int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    get(2,q);
    display(q);
}