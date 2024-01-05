#include<bits/stdc++.h>
using namespace::std;


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min  = *min_element(v.begin(),v.end()); //return type is pointer in case of arrays otherwise iterator
    // similarly max_element 
    int sum = accumulate(v.begin(),v.end(),0); //0 is the initial sum
    int ct = count(v.begin(),v.end(),2); //2's count is to be found
    auto it = find(v.begin(),v.end(),2); // 2 is the element to be found
    if(it==v.end()) cout<<"NOT FOUND"<<endl;
    reverse(v.begin(),v.end());//also used to reverse string, same vector is reversed
    string s = "abcds";
    reverse(s.begin,s.end());
    // All of these functions has the time complexity of O(n);

    // bool algo -->
    // lambda function-->
    // cout<<[](int x,int y){return x+y}(9+7)<<endl;
    auto sum = [](int x, int y){return x+y};
    cout<<sum(5,6)<<endl;

    vector<int> v = {2,3,5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0})<<endl;
    // all_of applies the lambda function to every element
    // we can pass a function either instead of lambda function
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0})<<endl;


    return 0;
}