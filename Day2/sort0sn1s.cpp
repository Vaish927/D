#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortArr(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]==0)
        i++;
        else if(arr[j]==1)
        j--;
        else /* if(arr[i]==1 & arr[j]==0) */
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;j--;
        }
    }

}

int main()
{
    int arr[]={0,1,1,0,0,1,0};
    sortArr(arr,7);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";

}