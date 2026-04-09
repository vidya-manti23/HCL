#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, result;
    cin>>s;
    result="";
    int n= s.length();
    
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 && s[i]==s[i+1]){   // i<n-1 cuz, we using i+1 we may go out of bound
            count++;
            i++;
        }
        result+=s[i];
        result+=to_string(count);
    }
    
    cout<<result;
    
    return 0;
}
