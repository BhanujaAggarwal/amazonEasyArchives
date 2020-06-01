#include<bits/stdc++.h>
using namespace std;

void alternate(int a[], int n){
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(a[i]>=0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    int i=0,j=0;
    while(i<n-1 and j<min(pos.size(),neg.size())){
        a[i] = pos[j];
        a[i+1] = neg[j];
        i+=2;
        j++;
    }
    while(j<pos.size()){
        a[i] = pos[j];
        i++;
        j++;
    }
    while(j<neg.size()){
        a[i] = neg[j];
        i++;
        j++;
    }
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        alternate(a,n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}