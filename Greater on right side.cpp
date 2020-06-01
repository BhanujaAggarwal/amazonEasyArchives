#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        b[n-1] = -1;
        int curr_max = INT_MIN;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=n-1;i>=0;i--){
            if(curr_max<a[i]) curr_max = a[i];
            b[i-1] = curr_max;
        }
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}