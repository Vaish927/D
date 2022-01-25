#include <iostream>
using namespace std;

int main() {
int arr[9];
    for(int i=0;i<9;i++)
    cin>>arr[i];
    int ans=0;
    for(int i=0;i<9;i++)
    ans=arr[i] ^ ans;
    
    cout<<ans<<endl;
	return 0;
}