#include<bits/stdc++.h>
using namespace std;

int common(int a1[], int a2[], int n1, int n2){
    int i=0,j=0;
    set<int> ans;
    sort(a1,a1+n1);
    sort(a2,a2+n2);
    while(i<n1 and j<n2){
        if(a1[i]==a2[j]) {
            ans.insert(a1[i]);
            i++,j++;
        }
        else if(a1[i]>a2[j]) j++;
        else i++;
    }
    return ans.size();
}

int main(){
    int t,n1,n2;
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        int a1[n1],a2[n2];
        for(int i=0;i<n1;i++) cin>>a1[i];
        for(int i=0;i<n2;i++) cin>>a2[i];
        cout<<common(a1,a2,n1,n2)<<endl;
    }
	
	return 0;
}