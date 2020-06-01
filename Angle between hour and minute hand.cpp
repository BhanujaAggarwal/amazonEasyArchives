#include<bits/stdc++.h>
using namespace std;

int degree(double h,double m){
    if(m==60) h--;
    if(!h) h = 12;
    double angleh = (30)*h + (m/2);
    double anglem = (6)*m;
    return floor(min(abs(angleh-anglem),360-abs(angleh-anglem)));
}

int main(){
	int t;
    cin>>t;
    while(t--){
        double h,m;
        cin>>h>>m;
        cout<<degree(h,m)<<endl;
    }
	return 0;
}