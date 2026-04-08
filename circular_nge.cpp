#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    vector<int>nge(n);
    stack<int>st;
    
    //**pop lesser and equal elements, then assign top most as nge for curr element, then push curr
    
    for(int i=2*n-1;i>=0;i--){ //pushh curr, the fill inside while conditions
        int curr= a[i%n];
        
        while(!st.empty() && st.top()<=curr){ //if less, pop (we only store great)
            st.pop();
        }
        
        if(i<n){
           nge[i]=st.empty() ? -1 : st.top();
        }
        
        st.push(curr);
    }
    
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    
    return 0;
}
