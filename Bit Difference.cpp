#include<bits/stdc++.h>
using namespace std;

int flip(int n1, int n2){
    string s1,s2;
    while(n1){
        s1+=to_string(n1%2);
        n1/=2;
    }
    while(n2){
        s2+=to_string(n2%2);
        n2/=2;
    }
    int nn = s1.size(), nm=s2.size();
    int cnt=abs(nn-nm);
    string app = string(cnt,'0');
    if(nn>nm){
        s2+=app;
    } else if(nm>nn){
        s1+=app;
    }
    int i=0;
    cnt=0;
    while(i<min(s1.size(),s2.size())){
        if(s1[i]!=s2[i]) cnt++;
        i++;
    }
    return cnt;
}

int main(){
    int t,n1,n2;
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        cout<<flip(n1,n2)<<endl;
    }
	
	return 0;
}