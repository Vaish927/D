//problemLink:https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getPivot(vector<int> &arr,int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int p,int n, int k)
{
    int s=p;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]>k)
            e=mid-1;
        else
            s=mid+1;
        mid=s+(e-s)/2;
        
    }
    return -1;
    
}

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=getPivot(arr,  n);
    int ans=-1;
    if(arr[pivot]<=k && arr[n-1]>=k)
        ans=binarySearch( arr,  pivot,n,  k);
    else
        ans=binarySearch(arr,0, pivot, k);
    return ans;
}

