#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int a=0,b=0,c=0,d=0;
        for(auto i:s){
            if(isalpha(i)){
                if(isupper(i)) a++;
                else b++;
            } else if(isdigit(i)){
                c++;
            } else d++;
        }
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    }
	
	return 0;
}