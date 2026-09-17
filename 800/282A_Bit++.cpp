#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int finalX(const vector<string>& operations) {
        int x=0;
        for(const string& operation:operations)
            if(operation[1]=='+') x++;
            else                  x--;
        return x;
    }
};

int main() {
    Solution obj;
    int n;
    cin>>n;
    vector<string> operations(n);
    for(string& operation:operations)
        cin>>operation;
    cout<<obj.finalX(operations);
    return 0;
}