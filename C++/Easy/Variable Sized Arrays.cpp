#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q,k,i,j,x;
    vector<vector<int>> answer;
    vector<int> temp;
    cin>>n>>q;
    for(;n!=0;--n){
        cin>>k;
        for(;k!=0;--k){
            cin>>x;
            temp.push_back(x);
        }
        answer.push_back(temp);
        temp.clear();
    }  
    for(;q!=0;--q){
        cin>>i>>j;
        cout<<answer[i][j]<<endl;
    }
    return 0;
}
