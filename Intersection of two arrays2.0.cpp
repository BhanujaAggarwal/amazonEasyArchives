#include<bits/stdc++.h>
using namespace std;

int common(int a1[], int a2[], int n1, int n2){
    unordered_set<int> s1,s2;
    int ans=0;
    for(int i=0;i<n1;i++){
        s1.insert(a1[i]);
    } 
    for(int i=0;i<n2;i++){
        if(s1.find(a2[i])!=s1.end()){
            ans++;
            s1.erase(s1.find(a2[i]));
        }
    }
    return ans;
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