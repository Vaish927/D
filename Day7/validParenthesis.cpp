//problem link:-https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string str)
{
    // Write your code here.
    stack<char>s;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        char ch=str[i];
        if(ch=='(' || ch=='{' || ch=='[')
            s.push(ch);
        else{
            if(!s.empty())
            {
                char c=s.top();
                if((ch==')'&& c=='(') ||
                  (ch==']' && c=='[')||
                  (ch=='}' && c=='{'))
                {
                    s.pop();
                }
                else
                    return false;
            }
            else
                return false;
        }
        
            
    }
    if(s.empty())
			return true;
        else
            return false;
}