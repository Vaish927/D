
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