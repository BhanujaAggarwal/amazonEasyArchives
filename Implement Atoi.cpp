int atoi(string s)
{
    int n = s.size(),a=0;
    for(int i=0;i<n;i++){
        if(n-1-i==0 and s[n-1-i]=='-'){
            a*=-1;
        }
        else if(isdigit(s[n-1-i])){
            a+=(s[n-1-i]-'0')*pow(10,i);
        } else return -1;
    }
    return a;
}