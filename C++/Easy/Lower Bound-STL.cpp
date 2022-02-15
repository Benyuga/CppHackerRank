#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int x,q;
    cin>>q;
    for(;q!=0;--q){
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    for(;q!=0;--q){ 
        cin>>x;
        auto itr=find(v.begin(),v.end(),x);
        if(itr!=v.end()){
            cout<<"Yes "<<itr-v.begin()+1<<endl;
        }else{
            itr=find_if(v.begin(),v.end(),[&](int i){return i>x;});
            cout<<"No "<<itr-v.begin()+1<<endl;
        }
    }
    return 0;
}
