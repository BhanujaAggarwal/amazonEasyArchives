#include<bits/stdc++.h>
using namespace std;

void sieve(bool prime[],int cnt[]){
    for(int i=2;i<=1000000;i++){
        cnt[i]=cnt[i-1];
        if(prime[i]){
            cnt[i]++;
            for(int j=2*i;j<=1000000;j+=i){
                prime[j]=false;
            }
        }
    }
}

int main(){
    long long int t,n;
    string s;
    cin>>t;
    bool prime[1000001];
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    int cntPrime[1000001];
    cntPrime[0]=cntPrime[1]=0;
    sieve(prime,cntPrime);
    while(t--){
        cin>>n;
        long int k = sqrt(n);
        cout<<cntPrime[k]<<endl;
    }
	
	return 0;
}