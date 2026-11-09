#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int l=0,r=n-1;
        while(l<=r) {
            if(s[l]==s[r]) break;
            l++,r--;
        }
        cout<<(l>r?0:r-l+1)<<'\n';
    }
    return 0;
}