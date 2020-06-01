class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        unordered_map<string,int> m;
        string curr = "";
        for(int i=0;i<p.size();i++){
            if(isalpha(p[i])){
                curr += tolower(p[i]);
            }
            else if(curr!=""){
                m[curr]++;
                curr = "";
            }
        }
        m[curr]++;
        int maxi = -1;
        string ans;
        for(auto i:banned) m[i]=0;
        for(auto i:m){
            if(i.second>maxi and i.first!=""){
                maxi = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};