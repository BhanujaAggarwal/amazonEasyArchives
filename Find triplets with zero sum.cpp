bool findTriplets(int a[], int n)
{ 
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        int x = a[i];
        int l = i+1;
        int r = n-1;
        while(l<r){
            if(x+a[l]+a[r]==0) return true;
            if(x+a[l]+a[r]<0) l++;
            else r--;
        }
    }
    return false;
}