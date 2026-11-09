#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        int mn=INT_MAX,mx=INT_MIN;
        vector<int> nums(n);
        for(int& num:nums) {
            cin>>num;
            if(num<mn) mn=num;
            if(num>mx) mx=num;
        }
        int size=mx-mn+1;
        vector<bool> seen(size,false);
        for(int num:nums) seen[num-mn]=true;
        bool yes=true;
        for(bool is:seen) if(!is) {
            yes=false;
            break;
        }
        cout<<(yes?"YES\n":"NO\n");
    }
    return 0;
}