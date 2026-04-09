#include<bits/stdc++.h>
using namespace std;


bool cmp(string a, string b){
    return a.length()<b.length();
}
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),cmp);
    for( string s:arr){
        cout<<s<<endl;
    }
    return 0;
}
