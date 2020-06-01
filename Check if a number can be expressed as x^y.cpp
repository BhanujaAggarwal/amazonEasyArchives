#include<bits/stdc++.h>
using namespace std;

double log_a_to_base_b(int a, int b) 
{ 
    return log(a) / log(b); 
} 

bool check(int n){
    if(!n) return false;
    if(n==1) return true; 
    for(int i=2;i<sqrt(n)+1;i++){
        if(floor(log_a_to_base_b(n,i))==ceil(log_a_to_base_b(n,i)) and log_a_to_base_b(n,i)!=1) return true;
    }
    return false;
}

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<check(n);
        cout<<endl;
    }
	
	return 0;
}