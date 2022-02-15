#include <iostream>
#include <bits/stdc++.h>
#include <deque> 
using namespace std;

/// deque version
// void printKMax(int arr[], int n, int k){
//     deque<int> d1;
//     int maxI=0;
    
    
// 	for(int i=0;i<n;++i){
//        d1.push_back(arr[i]);
//        maxI=max(maxI,arr[i]);
//        if(d1.size()==k){
//            cout<<maxI<<" ";
//            if(maxI==d1.front()){
//                d1.pop_front();
//                maxI=*max_element(d1.begin(),d1.end());
//            }else{
//                d1.pop_front();
//            }
           
//        }
       
       
       
//     }
//     cout<<endl;
// }

void printKMax(int arr[], int n, int k){
    int max = *max_element(arr,arr+k);
    cout<<max<<" ";
    for(int i=k;i<n;++i){
        if(max<arr[i]){
            max=arr[i];
            cout<<max<<" ";
            continue;
        }
        if(max==arr[i-k]){
            max = *max_element(arr+i-k+1,arr+i+1);
        }
        cout<<max<<" ";
    }
    cout<<endl;
    
}

int main(){
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
