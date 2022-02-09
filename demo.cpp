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
    cout<<"Removing stack element"<<s.pop()<<endl;
    cout<<"Removing stack element"<<s.pop()<<endl;
    cout<<"Removing stack element"<<s.pop()<<endl;
    return 0;
}