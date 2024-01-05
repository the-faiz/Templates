#include<bits/stdc++.h>
using namespace::std;

int main(){
    pair<int,string> p ;
    // p = make_pair(2,"abc");
    p = {2."abcs"};
    pair<int,string> p1 = p;
    pair<int,string> &p2 = p;
    p1.first = 2;
    p2.first = 5; //changes p also
    cout<<p.first<<" "<<p.second<<endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int, int> p_arry[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_arrar[0],p_array[2]);
    
    return 0;
}