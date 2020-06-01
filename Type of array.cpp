#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int i=0,d=0,posi,posd;
        for(int j=0;j<n;j++) cin>>a[j];
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]) {
                i++;
                posi = j+1;
            } else{
                d++;
                posd = j;
            }
        }
        if(d==n-1) cout<<a[0]<<" 2";
        else if(i==n-1) cout<<a[n-1]<<" 1";
        else{
            if(i==1) cout<<a[posi]<<" 3";
            else cout<<a[posd]<<" 4";
        }
        cout<<endl;
    }
	
	return 0;
}