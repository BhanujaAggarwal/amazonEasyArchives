queue<long long int> rev(queue<long long int> q)
{
    stack<long long int> s;
    while(!q.empty()){
        long long int f = q.front();
        q.pop();
        s.push(f);
    }
    queue<long long int> ans;
    while(!s.empty()){
        int f = s.top();
        s.pop();
        ans.push(f);
    }
    return ans;
}