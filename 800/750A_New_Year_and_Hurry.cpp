#include<iostream>
using namespace std;

int solve(int n,int k) {
    int fourHours=60*4;
    int minNeeded=0;
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(k+minNeeded+(5*i)<=fourHours){
            minNeeded+=5*i;
            ans++;
        }
    }
    return ans;
}

int main() {
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k);
    return 0;
}