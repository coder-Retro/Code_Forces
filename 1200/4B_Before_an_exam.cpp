#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

class Solution {
public:
    void solve(vector<pair<int,int>>& hours,int d,int sumTime) {
        int minHours=0;
        int maxHours=0;
        for(pair<int,int>& hour:hours) {
            minHours+=hour.first;
            maxHours+=hour.second;
        }
        if(sumTime<minHours || sumTime>maxHours) {
            cout<<"NO";
            return;
        }
        vector<int> todayHours(d,0);
        for(int i=0;i<d;i++) todayHours[i]=hours[i].first;
        sumTime-=minHours;
        for(int i=0;i<d&&sumTime>0;i++) {
            int pending=hours[i].second-hours[i].first;
            int add=min(pending,sumTime);
            todayHours[i]+=add;
            sumTime-=add;
        }
        cout<<"YES\n";
        for(int i=0;i<d;i++) {
            cout<<todayHours[i];
            if(i<d-1) cout<<" ";
        }
    }
};

int main() {
    Solution obj;
    int d,sumTime;
    cin>>d>>sumTime;
    vector<pair<int,int>> hours(d);
    for(int i=0;i<d;i++) cin>>hours[i].first>>hours[i].second;
    obj.solve(hours,d,sumTime);
    return 0;
}