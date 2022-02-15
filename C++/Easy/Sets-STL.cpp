#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int>s;
    int types,x,Q;
    
    cin>>Q;
    for(;Q!=0;--Q){
        cin>>types>>x;
     
        switch (types) {
            case 1 :
                    s.insert(x);
                    break;
            case 2 :
                if(s.find(x)!=s.end()){
                    s.erase(x);
                }
                break;
            case 3 :
                    if(s.find(x)!=s.end()){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
        }
    }
    
    
      
    return 0;
}



