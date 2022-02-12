#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char>s;
    for(int i=0;i<str.size();i++)
    {
        s.push(str[i]);
    }
    for(int i=0;i<str.size();i++)
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}