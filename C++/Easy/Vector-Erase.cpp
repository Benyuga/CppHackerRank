#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n,m,x;
    cin>>n;
    for(;n!=0;--n){
        cin>>m;
        v.push_back(m);
    }
    cin>>x;
    v.erase(v.begin()+x-1);
    cin>>n>>m;
    v.erase(v.begin()+n-1,v.begin()+m-1);
    cout<<v.size()<<endl;
    for(auto itr=v.begin();itr!=v.end();++itr){
        cout<<*itr<<" ";
    }
    
    
    
    
    
    return 0;
}
