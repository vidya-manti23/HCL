    // for(int j =0;j<k;j++){
        
    // int temp = arr[n-1];
    // for(int i = n-1;i>0;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=temp;
    // }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    k=k%n;
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());
    
    for(int x:a){
        cout<<x;
    }
    return 0;
}
