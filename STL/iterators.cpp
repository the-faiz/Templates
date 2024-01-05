#include<bits/stdc++.h>
using namespace::std;

int main(){
    //iterators helps us in accessing data from contianers
    vector<int> v = {2,3,5,6,7};
    // .begin()-->points to first element;
    // .end()-->points to next to last 
    vector<int> :: iterator it;
    it = v.begin();
    cout<<(*(it+1)) <<endl;
    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<endl;
    }
    //note--> it++ --> takes you to next iterator
    //note--> it+1--> takes you to next location
    // In vectors since the memory is contiguous both are same but this is the case with maps
    
    //In maps--> it+1 is an invalid operation because it taked you to next location
    //it++ is valid;

    vector<pair<int,int>> v_p = {{1,2},{2,3}};
    vector<pair<int,int>> :: iterator it;
    for(it = v_p.begin();it!=v_p.end();it++){
        cout<<(*it).first<<endl;
        cout<<it->first<<endl; //Same thing, use this
    }


    //Writing iterators code in short
    //Range based loop and auto keywords
    for(int value: v){
        //value is copy from the data// value++ does not the change the actual data
        cout<<value<<endl;
    }

    for(int &value: v){
        //value is now a refrence
        cout<<value<<endl;
    }

    for(pair<int,int> &p: v_p){
        cout<<p<<endl;
    }

    //auto keyword
    auto a = 1;
    cout<< a <<endl;
    //automatically defines the data type
    vector(auto &p: v_p){
        cout<<p<<endl;
    }

    return 0;
}