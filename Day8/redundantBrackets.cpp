//problem Link:https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include<stack>
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    int n=s.size();
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            st.push(ch);
        }
        else
        {
            if(ch==')')
            {
            bool redundant=true;
            while(st.top()!='(')
            {
                char c=st.top();
                if( c=='+' || c=='-' || c=='*' || c=='/')
                {
                   
                    redundant=false;
                    
                }
                 st.pop();
                
            }
            st.pop();
            if(redundant)
            return true;
        }
        }
    }
    return false;
}
