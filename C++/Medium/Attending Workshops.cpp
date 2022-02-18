#include<bits/stdc++.h>

using namespace std;
struct Workshop{
    int start_time;
    int duration;
    int end_time;
    Workshop(const int& start,const int& dur){
        start_time=start;
        duration=dur;
        end_time=start+dur;
    }
    bool operator >(const Workshop& A){
        return this->end_time > A.end_time;
    }
    bool operator <(const Workshop& A){
        return this->end_time < A.end_time;
    }
};

struct Available_Workshops{
  int number;
  vector<Workshop> ar;
};
\
//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize(int start_time[],int duration[],int n){
      Available_Workshops* ptr{new Available_Workshops};
      ptr->number=n;
      for(int i=0;i<n;i++){
         ptr->ar.push_back(Workshop(start_time[i],duration[i]));
      }
      return ptr;
} 

int CalculateMaxWorkshops(Available_Workshops* ptr){
    int maxw=1;
    
    sort(ptr->ar.begin(),ptr->ar.end());
    int end=ptr->ar.front().end_time;
    for(auto itr=ptr->ar.begin()+1;itr!=ptr->ar.end();++itr){
        if(itr->start_time>=end){
            maxw++;
            end=itr->end_time;
        }
    }
    return maxw;
} 
int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
