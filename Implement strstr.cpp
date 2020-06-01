int strstr(string s, string x)
{
    int n = s.size(),n2=x.size(),j=0,i=0;
    while(i<n){
        j=0;
        while(s[i]==x[j] and i<n and j<n2){
            i++;
            j++;
        }
        if(j==n2) return i-n2;
        i-=(j-1);
    }
    return -1;
}