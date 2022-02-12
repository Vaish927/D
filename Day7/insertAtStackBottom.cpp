//problem link:https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
   
    }
    int num=s.top();
    s.pop();
        solve(s,x);
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& s, int x) 
{
    // Write your code here.
    solve( s, x);
    
    return s;
}
