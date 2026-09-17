#include<iostream>
#include<vector>
using namespace std;
 
class Solution {
public:
    int minSwaps(const vector<int> heights) {
        int minIdx=0,maxIdx=0;
        for(int i=0;i<heights.size();i++) {
            if(heights[i]<=heights[minIdx]) minIdx=i;
            if(heights[i]>heights[maxIdx])  maxIdx=i;
        }
        int totalSwaps=(heights.size()-1-minIdx)+(maxIdx);
        return (minIdx<maxIdx)?totalSwaps-1:totalSwaps;
    }
};
 
int main() {
    Solution obj;
    int n;
    cin>>n;
    vector<int> heights(n,0);
    for(int i=0;i<n;i++) cin>>heights[i];
    cout<<obj.minSwaps(heights);
    return 0;
}