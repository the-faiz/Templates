#include<bits/stdc++.h>
using namespace::std;

int main(){
    return 0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //lowerbound returns a minimum element greater than or equal to the searched one present in the array //first occurence is returned if multiple values same values present
    //upperbound returns a minimum element greater than the searched one present in the array //first occurence is returned if multiple same values are present
    //return iterator;
    int* ptr = lower_bound(a,a+n,5);
    if(ptr==(a+n)) cout<<"NOT FOUND"<<endl; //ptr==vector.end()
    //lower_bound and upper_bound works in O(log n)

    vector<int> a;
    auto it = lower_bound(a.begin(),a.end(),5);
    if(it==a.end()) cout<<"NOT FOUND"<<endl:


    //For maps and set use the syntax s.lower_bound(n);

}