#include<bits/stdc++.h>
using namespace::std;

void printVec(vector<int> v){
    // void printVec(vector<int> &v){} --> use this to avoid copying time of the vector...here it is passed by reference
    // v.size()-->O(1)
    for(int i=0;i>v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"endl";
}


int main(){
    //continuous memory blocks
    //basically dynamic size array
    int n;cin>>n;
    vector<int> v;
    vector<pair<int,int>> pair_vector;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);//O(1)
    }
    printVec(v);
    //maximum size of vector is 10^5

    vector<int> v(10) //initialized to 0;
    v.push_back(7); //size:11
    vector<int> v(10,2) //intialized to 2;

    v.pop_back();//removes the last element O(1)

    vector<int> v2 = v;  //Copying vectors directly O(n) time complexity
    vector<int> &v3 = v; //same vector


    //Nesting in vector-->
    vector<pair<int,int>> v = {{1,2},{2,3},{4,5}};
    cout<<v[1].first<<endl;
    v.push_back({6,7}); //v.push_back(make_pair(6,7))


    //Array of vectors
    //analogous to 2nd array
    vector<int> v[10]; //10 vectors of size 0
    v[0].push_back(1);
    v[0][0]// -> 1st element of 1st vector

    //vectors of vectors
    vector<vector<int>> v;
    vector<int> temp;
    temp.push_back(6);
    v.push_back(temp);
    v.push_back(vector<int> ());
    v[1].push_back(5);
    // access with v[a][b]-->b the element of ath vector 
    return 0;
}