#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(6);
    s.push(5);

    int n=s.size();
    cout<<s.empty()<<endl;
    cout<<"Removing stack element" <<s.top()<<endl;
    s.pop();
    cout<<"Removing stack element" <<s.top()<<endl;
    s.pop();
     cout<<"Top stack element"<<s.top()<<endl;
    s.pop();
    s.pop();  
     cout<<s.empty()<<endl;
    

    return 0;
}