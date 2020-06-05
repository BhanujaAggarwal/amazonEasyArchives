#include<bits/stdc++.h>
using namespace std;

long long int single_digit(long long int n){
    int summ=n%10;
    while((n/10)!=0){
        string s = to_string(n);
        int len = s.size(),i=0;
        summ=0;
        while(i<len){
            summ += (s[i]-'0');
            i++;
        }
        n=summ;
    }
    return summ;
}

int main(){
    long long int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<single_digit(n)<<endl;
    }
	
	return 0;
}