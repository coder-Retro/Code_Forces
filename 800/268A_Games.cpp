#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int solve(vector<pair<int,int>>& teams) {
    int ans=0;
    for(int i=0;i<teams.size();i++) {
        for(int j=0;j<teams.size();j++) {
            if(teams[i].first==teams[j].second) ans++;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> teams;
    for(int i=0;i<n;i++) {
        pair<int,int> team;
        cin>>team.first>>team.second;
        teams.push_back(team);
    }
    cout<<solve(teams);
    return 0;
}