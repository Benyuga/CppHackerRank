#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    vector<string> word{"one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine "};
    vector<string> evenOdd{"even","odd"};
    cin>>a>>b;
    for(;a<=b;a++){
        if(a<=9){
            cout<<word[a-1]<<endl;
        }else{
            cout<<evenOdd[a%2]<<endl;
        }
        
    }
    return 0;
}
