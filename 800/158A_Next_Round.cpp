#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int nextRound(const vector<int>& players,int k) {
        int totalPass=0;
        for(int i=0;i<players.size();i++)
            if(players[i] && players[i]>=players[k-1]) totalPass++;
            else                                       break;
        return totalPass;
    }
};

int main() {
    Solution obj;
    int n,k;
    cin>>n>>k;
    vector<int> players(n);
    for(int& i:players) cin>>i;
    cout<<obj.nextRound(players,k);
    return 0;
}