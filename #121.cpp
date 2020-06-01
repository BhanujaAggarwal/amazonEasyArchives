class Solution {
public:
    int maxProfit(vector<int>& a) {
        int maxi=0, n = a.size(),min_price;
        for(int i=0;i<n;i++){
            min_price = min(min_price,a[i]);
            maxi = max(maxi,a[i]-min_price);
        }
        return maxi;
    }
};