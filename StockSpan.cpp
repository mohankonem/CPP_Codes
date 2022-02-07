#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        stack<int> s;
        int res[n];
        for(int i=0;i<n;i++)
        {
            while(!s.empty()&&a[s.top()]<=a[i])
            s.pop();
            if(s.empty())
            res[i]=i+1;
            else
            res[i]=i-s.top();
            s.push(i);
        }
        for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
        cout<<"\n";
    }
}
