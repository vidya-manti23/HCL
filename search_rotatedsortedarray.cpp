// 1. Find mid
// 2. Check which half is sorted
// 3. Check if target lies in that half
// 4. Move accordingly

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;
    
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int low=0, high=a.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==target) {
            cout<<mid;
            return 0;
        }
        
        if(a[low]<=a[mid]){ //left half sorted
            if(a[low]<=target && target<a[mid]){ //check in sorted
                high=mid-1;
            }else{          //not there in sorted, so move low
                low=mid+1;
            }
        }
        
        else{//right half sorted
            if(a[mid]<=target && target < a[high]){ //check in sorted
                low=mid+1;
            }else{
                high= mid-1;
            }
        }
        
    }
    return 0;
}
