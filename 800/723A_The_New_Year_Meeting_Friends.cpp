#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

class Solution {
public:
    int minDistance(const vector<int>& ps) {
        int minDis=INT_MAX;
        int a=ps[0],b=ps[1],c=ps[2];
        for(int i=a;i<=c;i++) {
            int currDis=abs(i-a)+abs(i-b)+abs(i-c);
            minDis=min(minDis,currDis);
        }
        return minDis;
    }
};

int main() {
    Solution obj;
    vector<int> points(3);
    cin>>points[0]>>points[1]>>points[2];
    sort(points.begin(),points.end());
    cout<<obj.minDistance(points);
    return 0;
}