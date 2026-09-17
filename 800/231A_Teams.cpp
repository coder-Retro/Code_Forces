#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int solvableProbs(const vector<vector<int>>& teams) {
        int ans;
        for(const vector<int>& team:teams) {
            int curr=0;
            for(int i:team) if(i) curr++;
            if(curr>1) ans++;
        }
        return ans;
    }
};

int main() {
    Solution obj;
    int n;
    cin>>n;
    vector<vector<int>> teams(n);
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++) {
            int member;
            cin>>member;
            teams[i].push_back(member);
        }
    cout<<obj.solvableProbs(teams);
    return 0;
}