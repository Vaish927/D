 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 double precision(int  temp,long long int N,int cnt)
 {
     double factor=1;
     double ans=temp;
     for(double i=temp; i<cnt;i++)
     {
         factor/=10;
         for(double j=factor; j*j<N;j=j+factor)
         ans=j;
     }

     return ans;
 }
int sqrtN(long long int N)
{
    // Write your code here.
    int s=0,e=N;
    long long  int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e)
    {
        long long int sq=mid*mid;
        if(sq==N)
            return mid;
        else if(sq<N)
        {
            ans=mid;
            s=mid+1;
            
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;
	}
    return ans;
}