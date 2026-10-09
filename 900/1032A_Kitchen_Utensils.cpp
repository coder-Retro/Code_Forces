#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(int n,int k,const vector<int>& uten) {
    vector<int> freq(100,0);
    int maxFreq=0;
    int distinct=0;
    for(int i:uten) {
        if(!freq[i-1]) distinct++;
        freq[i-1]++;
        maxFreq=max(maxFreq,freq[i-1]);
    }
    int dishes=maxFreq/k;
    if(maxFreq%k) dishes++;
    int total_utensils=dishes*k*distinct;
    return total_utensils-n;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> uten(n);
    for(int& i:uten) cin>>i;
    cout<<solve(n,k,uten);
    return 0;
}