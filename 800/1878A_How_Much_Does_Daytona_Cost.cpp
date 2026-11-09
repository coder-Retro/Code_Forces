#include<iostream>
#include<vector>
using namespace std;

void solve(int t) {
    vector<bool> ans(t,false);
    for(int i=0;i<t;i++) {
        int n,k;
        cin>>n>>k;
        while(n--) {
            int a;
            cin>>a;
            if(a==k) ans[i]=true;
        }
    }
    for(int i=0;i<t;i++) {
        cout<<(ans[i]?"YES":"NO");
        if(i<t-1) cout<<'\n';
    }
}

int main() {
    int t;
    cin>>t;
    solve(t);
    return 0;
}