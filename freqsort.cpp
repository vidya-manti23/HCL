// map sorts by key, but we need sort by value = freq, so unordered eppatila

#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int>a, pair<int,int>b){
    if(a.second==b.second){ //if freqs equal, then low key number
        return a.first<b.first;
    }
    return a.second>b.second;  //high freq 1st
} // 2 -> 3, 4-> 3....then 2 2 2 4 4 4

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;       //m[key]++
    }
    
    vector< pair<int,int> > v(m.begin(),m.end()); //tranfer to vector to sort by freq
    // vector has pairs now, we give pairs to function to compare
    
    sort(v.begin(), v.end(), cmp);
    
    for(auto it:v){
        for(int i=0;i<it.second;i++){ // 2->3...upto 3 repeat 2
            cout<<it.first<<" ";
        }
    }
    
    return 0;
}
