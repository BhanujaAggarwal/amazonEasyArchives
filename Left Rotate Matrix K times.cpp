#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m,k;
    string s;
    cin>>t;
    while(t--){
        cin>>m>>n>>k;
        int a[m][n],b[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        k = k%n;
        int temp[k];
        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++){
                temp[j] = a[i][j];
            }
            for(int j=0;j<n-k;j++){
                a[i][j] = a[i][j+k];
            }
            for(int j=0;j<k;j++){
                a[i][j+(n-k)] = temp[j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
	
	return 0;
}