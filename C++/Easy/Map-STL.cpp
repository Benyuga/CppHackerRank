#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int> m;
    int n,type,Y;
    string X;
    cin>>n;
    for(;n!=0;--n){
        cin>>type;
        if(type==1){
            cin>>X>>Y;
            m[X]+=Y;
        }else if(type==2){
            cin>>X;
            m[X]=0;
        }else if(type==3){
            cin>>X;
            cout<<m[X]<<endl;
        }
    }
      
    return 0;
}



