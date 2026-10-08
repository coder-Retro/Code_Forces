#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSorted(const vector<int>& boxes) {
    for(int i=0;i<boxes.size()-1;i++) {
        if(boxes[i]>boxes[i+1]) return false;
    }
    return true;
}

string solve(int n,int k,vector<int>& boxes) {
    if(k>1 || isSorted(boxes)) return "YES";
    else return "NO";
}

int main() {
    int t;
    cin>>t;
    vector<string> ans(t);
    for(int i=0;i<t;i++) {
        int n,k;
        cin>>n>>k;
        vector<int> boxes(n);
        for(int& box:boxes) cin>>box;
        ans[i]=solve(n,k,boxes);
    }
    for(int i=0;i<t;i++) {
        cout<<ans[i];
        if(i<t-1) cout<<'\n';
    }
    return 0;
}