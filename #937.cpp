class Solution {
public:
    static bool cmp(string s1, string s2)
    {
        int pos1 = s1.find(' ');
        int pos2 = s2.find(' ');
               
        if(s1.substr(pos1 + 1) < s2.substr(pos2 + 1))
            return true;
        if(s1.substr(pos1 + 1) > s2.substr(pos2 + 1))
            return false;
        else
            return s1.substr(0, pos1 + 1) < s2.substr(0, pos2 + 1);
       
    }
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> ans;
        int n;
        for(auto i: logs){
            n = i.size();
            if(isalpha(i[n-1])) ans.push_back(i); 
        }
        sort(ans.begin(), ans.end(),cmp);
        for(auto i: logs){
            n = i.size();
            if(!isalpha(i[n-1])) ans.push_back(i); 
        }
        return ans;
    }
};