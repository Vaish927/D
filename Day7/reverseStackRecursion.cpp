//problemLink:https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int> &s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int n=s.top();
    s.pop();
    insertatbottom(s,x);
    s.push(n);
        
}
void reverseStack(stack<int> &s) {
    // Write your code here
    
    if(s.empty())
    {
        return;
	}
    
    int num=s.top();
    s.pop();
    reverseStack(s);
    insertatbottom(s,num);   
}