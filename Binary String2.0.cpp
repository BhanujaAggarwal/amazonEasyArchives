long binarySubstring(int n, string s){
    int cnt=0;
    for(auto i:s) if(i=='1') cnt++; 
    long long int ans = (cnt)*(cnt-1);
    return ans/2;
}