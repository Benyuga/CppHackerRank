#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> answer;
    int n,v;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>v;
        answer.push_back(v);
    }
    sort(answer.begin(),answer.end());
    for(auto itr=answer.begin();itr!=answer.end();++itr){
      cout<<*itr<<" ";   
    } 
    return 0;
}
