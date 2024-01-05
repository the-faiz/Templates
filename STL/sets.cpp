#include<bits/stdc++.h>
using namespace::std;

int main(){
    //set is basically maps with only key
    //set, unorderd set, multiset
    //Red black tree implementation

    set<string> s; //set<set<int>> a;
    //stores only unique elements in sorted order
    s.insert("abs"); //log(n) --> same is the time complexity of accessing
    s.insert("sad");
    s.insert("fsd");
    s.insert("abs") //No work
    auto it = s.find("abc"); //if does not exits it = .end() itertor -- O(logn)
    if(it!=s.end()){
        cout<<(*it)<<endl;
        s.erase(it);
    }
    s.erase("sad");

    for(auto val:s){
        cout<<val<<endl;
    }

    //unordered set --> same difference
    // all time complexity is O(1)
    // no ordering
    //hash tables are used
    //keys cannot be complex data structures because their hash functions are not defined


    //multiset--> allows multiple value insertion
    //all time complexity is O(log(n))
    //Duplicates allowed
    multiset<string> s;
    s.insert("abc");
    s.insert("abc");
    auto it = s.find("abc"); //first iterator
    s.erase(it); //One abc deleted
    s.erase("abc"); //All abc deleted
    // s.size();
    // s.clear();


    return 0;
}