#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100];
    int b[100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    
    
    vector<int> ans;
        for(int i=0;i<n;i++)
            ans.push_back(a[i]);
        for(int i=0;i<m;i++)
            ans.push_back(b[i]);
            
        sort(ans.begin(),ans.end());
        int count=1;
        for(int i=1;i<ans.size();i++)
            if(ans[i]!=ans[i-1])
                count++;
    cout<<count<<" ";
    return 0;
}