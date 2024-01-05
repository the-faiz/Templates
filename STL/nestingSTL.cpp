#include<bits.stdc++.h>
using namespace::std;

int main(){
    map<pair<int,int>,int> m; // not allowed in unorderd maps
    pair<int,int> p1,p2;
    p1 = {1,2};
    p2 = {2,3};
    cout<<(p1<p2); //first element is compared;

    map<set<int>,int>m;
    set<int> s1, s2;
    s1 = {1,2,3};
    s2 ={2,3};
    cout<<(s1<s2)<<endl;

    map<pair<string,string>,vector<int>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn, ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            m[{ln,fn}].push_back(x);
        }
    }

    for(auto &pr:m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<fullname.first<<endl;
    }

    return 0;
}