#include<iostream>
using namespace std;

int solve(int k,int r) {
    int ans=1;
    while(ans<10) {
        if((ans*k)%10==0 || (ans*k)%10==r) break;
        ans++;
    }
    return ans;
}

int main() {
    int k,r;
    cin>>k>>r;
    cout<<solve(k,r);
    return 0;
}