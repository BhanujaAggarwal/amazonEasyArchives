vector<int> SortBinaryArray(vector<int> a)
{
    int l=0,r=a.size()-1;
    while(l<r){
        while(a[l]==0 and l<r) l++;
        while(a[r]==1 and l<r) r--;
        if(l<r) swap(a[l],a[r]);
    }
    return a;
}