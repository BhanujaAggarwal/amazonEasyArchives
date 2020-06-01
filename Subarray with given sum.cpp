#include <bits/stdc++.h>
using namespace std;

vector<int> subsum(int a[], int n, int sum){
    vector<int> ans;
    int curr_sum=0,start=0;
    for(int i=0;i<n;i++){
        curr_sum += a[i];
        while(curr_sum>sum and start<i){
            curr_sum -= a[start];
            start++;
        }
        if(curr_sum==sum){
            ans.push_back(start+1);
            ans.push_back(i+1);
            return ans;
        }
    }
    ans.push_back(-1);
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n>>sum;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    vector<int> ans = subsum(a,n,sum);
	    if(ans.size()==2) cout<<ans[0]<<" "<<ans[1]<<endl; 
	    else cout<<ans[0]<<endl;
	    
	}
	return 0;
}