#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<int> ans(t);
    for(int i=0;i<t;i++) {
        int n,x;
        cin>>n>>x;
        vector<int> curr(n);
        for(int j=0;j<n;j++) {
            cin>>curr[j];
            if(!j) ans[i]=curr[j];
            else ans[i]=max(ans[i],curr[j]-curr[j-1]);
        }
        ans[i]=max(ans[i],2*(x-curr.back()));
    }
    for(int i=0;i<t;i++) {
        cout<<ans[i];
        if(i<t-1) cout<<'\n';
    }
    return 0;
}