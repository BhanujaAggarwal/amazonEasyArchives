#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int k=0,j=0,p[n/2],nn[n/2];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) {
            if(a[i]>0){
                p[j]=a[i];
                j++;
            } else{
                nn[k]=a[i];
                k++;
            }
        }
        for(int i=0;i<n/2;i++){
            cout<<p[i]<<" "<<nn[i]<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}