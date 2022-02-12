//problemLink:https://www.codingninjas.com/codestudio/problems/delete-middle-element-from-stack_985246?leftPanelTab=1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s, int cnt,int N)
{
    if(cnt==N/2)
    {
        s.pop();
        return;
    }
    int num=s.top();
   	s.pop();
    solve(s,cnt+1,N);
    s.push(num);
    
}

void deleteMiddle(stack<int>&s, int N){
	
   // Write your code here
    int cnt=0;
    solve(s,cnt,N);
   
}