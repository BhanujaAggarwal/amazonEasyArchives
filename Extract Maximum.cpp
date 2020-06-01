#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s,curr;
    while(t--){
        cin>>s;
        int maxi=-1;
        curr="";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])) {
                curr+=s[i];
            } else{
                stringstream j(curr);
                int curr_num = 0;
                j >> curr_num;
                maxi = max(maxi,curr_num);
                curr="";
            }
        }
            if(curr.size()){
                stringstream j(curr);
                int curr_num = 0;
                j >> curr_num;
                maxi = max(maxi,curr_num);
                curr="";
            }
        cout<<maxi<<endl;
    }
	return 0;
}