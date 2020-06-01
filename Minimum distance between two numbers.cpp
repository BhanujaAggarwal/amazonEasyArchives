long long minDist(long long a[], long long n, long long x, long long y) {
    int p=-1, mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]==x or a[i]==y){
            if(p!=-1 and a[p]!=a[i]) mini = min(mini,i-p);
            p=i;
        }
    }
    if(mini==INT_MAX) return -1;
    return mini;
}