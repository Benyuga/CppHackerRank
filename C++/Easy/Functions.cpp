#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int* a,int* b,int* c,int* d){
    vector<int> maxE{*a,*b,*c,*d};
    return *max_element(maxE.begin(),maxE.end());
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(&a, &b, &c, &d);
    printf("%d", ans);
    
    return 0;
}
