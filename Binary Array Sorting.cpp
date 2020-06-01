#include<bits/stdc++.h>
using namespace std;

void sortbinary(int a[], int n){
    int one=0;
    for(int i=0;i<n;i++){
        if(a[i]) one++;
    }
    int zero = n-one;
    while(zero){
        cout<<"0 ";
        zero--;
    } 
    while(one){
        cout<<"1 ";
        one--;
    }
}

int main(){
	int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sortbinary(a,n);
        cout<<endl;
    }
	return 0;
}