int remAnagram(string str1, string str2)
{
    int s1[26]={0},s2[26]={0},t,d=0;
    int n1 = str1.size(), n2 = str2.size();
    for(int i=0;i<n1;i++){
        s1[str1[i]-'a']++;
    }
    for(int i=0;i<n2;i++){
        s2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        d += abs(s1[i]-s2[i]);
    }
    return d;
}