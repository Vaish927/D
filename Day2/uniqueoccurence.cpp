/* Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> count,count2;
        
        
        for(int i=0;i<arr.size();i++)count[arr[i]]++;
        for(auto i:count)count2[i.second]++;
        for(auto i:count2)if(i.second>1)return false;
        
        return true;
    }
};