#include <bits/stdc++.h>
using namespace std;

// if number push, if operator, pop before two, and apply operator between them
//atlast return answer thats left in stack

int rpn(vector<string>tokens){ //array of strings = tokens vector
    stack<int>st;
    for(string token:tokens){
        if(token=="+" || token =="-" || token =="/" ||token =="*"){
            int b= st.top(); st.pop();
            int a= st.top(); st.pop();
            if(token=="+") st.push(a+b);
            else if(token=="-") st.push(a-b);
            else if(token=="/") st.push(a/b);
            else st.push(a*b);
        }
        else st.push(stoi(token));
    }
    return st.top();
    
}

int main(){
int n;
cin>>n;
vector<string>tokens(n);
for(int i=0;i<n;i++){
    cin>>tokens[i];
}
cout<<rpn(tokens);
}
