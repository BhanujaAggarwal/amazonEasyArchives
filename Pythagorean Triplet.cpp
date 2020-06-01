#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,n,b;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>b;
            m[b*b]=1;
        }
        if(n<3) cout<<"No"<<endl;
        else{
            bool bb=0;
            for(auto i=m.begin();i!=m.end();i++){
                for(auto j=i;j!=m.end();j++){
                    int y = i->first+j->first;
                    if(m.find(y)!=m.end()){
                        cout<<"Yes"<<endl;
                        bb=1;
                        break;
                    }
                }
                if(bb) break;
            }
            if(!bb) cout<<"No"<<endl;
        }
    }
	return 0;
}