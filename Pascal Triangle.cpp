#include<bits/stdc++.h>
using namespace std;

// int fact(int n){
//     if(n<2) return 1;
//     return n*fact(n-1);
// }

// int ncr(int n, int r){
//     return (fact(n)/(fact(r)*fact(n-r)));
// }

int ncr(int n, int k) 
{ 
    int res = 1; 
    if (k > n - k) 
    k = n - k; 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
      
    return res; 
}

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        n--;
        for(int i=0;i<=n;i++){
            cout<<ncr(n,i)<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}