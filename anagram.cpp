#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char,int>m;
    
    string s1, s2;
    cin>>s1>>s2;
    
    for(char c:s1){
      m[c]++;
    }
    for(char c:s2){
      m[c]--;
    }
    
    for(auto it:m){
        if(it.second!=0){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
    
   
    return 0;
}
