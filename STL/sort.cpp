#include<bits/stdc++.h>
using namespace::std;

bool shouldswap(int a, int b){
    //comparator function
    //when do you want to swap
    return (a>b);
    //sort in decreasing order
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n); //a--> jahan se shuru karna hai
    // a+n--> jahan pe end karna hai uske baad ka address
    //uses intro sort--> mixture of 3 sorting algo --> quick sort, heap sort and insertion sort
    sort(a+2,a+n);// starting from index 2
    vector<int> a;
    sort(a.begin(),a.end());

    //comparator function --> custom sorting behaviour
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,shouldswap);





    return 0;
}