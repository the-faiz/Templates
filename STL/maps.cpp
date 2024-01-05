#include<bits/stdc++.h>
using namespace::std;

int main(){
    //Maps-->data structure that store key value pair
    //In maps time complexity to insert n elements is O(nlogn) and same is the time complexity for accessing n elements
    map<int,string> m;
    m[1] = "abc";
    m[5] = "cdc"; //O(log(n))
    m[3] = "acd";
    m.insert({4,"afg"}); //make_pair
    //automatic sorting of the key

    m[6]; //O(log(n))--> by default empty string is inserted
    m[5] = "cde";  // replace the existing value
    map<int,string> :: iterator it;
    for(it = m.begin();it!=m.end();++it){
        cout<<it->first<<endl;
    }

    for(auto &pr:m){
        cout<<pr.first<<endl; //accessing time is also log(n)
    }
    // m.size()-->returns the size 

    auto it = m.find(3); //returns the iterator of the 3 //O(log(n))
    if(it == m.end()){
        cout<<"Vale not found"<<endl;
    }

    m.erase(3); //O(log(n))
    // m.erase(it); any iterator
    //it must contian a vlaue or iterator that exits in the map otherwise segmentation falut will occur

    // m.clear(); clears the whole map

    map<string,string> m2;
    m2["abcd"] = "abcd";// s.size() * log(n) where s is the string key

    //  Given N strings, print unique strings in lexographical order with their frequency

    map<string, int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        // m[s] = m[s] +1;
        m[s]++;
    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    //unordered maps
    // 1. Inbuild implementation
    // 2. Time complexity
    // 3. valid key datatype

    unordered_map<int, int> m;
    //inbuilt it uses hash table
    //insertion and access time complexity is O(1)
    // m.find(), m.erase() --> O(1)

    // unordered map<pair<int,int>,string>  --> not allowed because no hash function of pair<int,int> is not defined. It can be used in ordered maps

    //muiltimap --> not used in cp
    map<int,vector<string>> m;

    //Note--> used maps when you want ordering otherwise use unordered map
    return 0;
}