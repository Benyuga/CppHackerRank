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
        auto lb =lower_bound(v.begin(), v.end(), x);
        if(*lb==x){
            cout<<"Yes "<<lb-v.begin()+1<<endl;
        }else{
            cout<<"No "<<lb-v.begin()+1<<endl;
        }
    }
    return 0;
}
