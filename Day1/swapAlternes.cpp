#include<iostream>
int main(){
    int arr[]={15,12,13,11,6,9,1,4,6,8};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i=i+2)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }

    return 0;
}