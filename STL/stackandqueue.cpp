#include<bits/stdc++.h>
using namespace::std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    queue <string> q;
    q.push("abc");
    q.push("abd");
    q.push("abe");
    q.push("abf");
    q.push("abg");
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    


    return 0;
}