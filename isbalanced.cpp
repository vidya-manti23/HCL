// open = push
// stack empty = return false
// closed = match and pop
// else return false..//closed and not matched

// open - stack empty - close - else return false
// if - elsse if = else if - else

#include <bits/stdc++.h>
using namespace std;


bool isbalanced(string s){
    stack<char>st;
    for(char c:s){
        
        if(c=='{'||c=='('||c=='['){ //if open bracket
            st.push(c);
        }
        
        else if(st.empty()) return false; //if stack completed like all {({[..all pushed, now not balanced
            
        else if((c=='}' && st.top()=='{') || //closed bracket and matched
                (c==']' && st.top()=='[') ||
                (c==')' && st.top()=='(')){
                    st.pop();
        }
        else{
            return false;  //closed bracket and not matched...[{( ]}]
        }
            
        }
        
    return st.empty();
}

int main(){
string s;
cin>>s;
 if(isbalanced(s)){
     cout<<"balanced";
 }else{
     cout<<"not balanced";
 }
    return 0;
}
