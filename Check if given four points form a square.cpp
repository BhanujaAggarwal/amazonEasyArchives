#include<bits/stdc++.h>
using namespace std;

int sq_distance(int s, int d, int a, int b){
    return (s-a)*(s-a) + (d-b)*(d-b);
}

int main(){
    int t,n;
    int a[4],b[4];
    string s;
    cin>>t;
    while(t--){
        for(int i=0;i<4;i++){
            cin>>a[i]>>b[i];
        }
        int x[3];
        for(int i=0;i<3;i++){
            x[i] = sq_distance(a[0],b[0],a[i+1],b[i+1]);
        }
        sort(x,x+3);
        if(x[0] and x[0]==x[1] and 2*x[0]==x[2]) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
	
	return 0;
}