#include<iostream>
#include<vector>
#include<string>
#include<ctype.h>
using namespace std;

class Solution {
    string helper(string s) {
        for(char& ch:s) ch=tolower(ch);
        return s;
    }
public:
    void solve(const vector<string>& test_cases) {
        for(string test_case:test_cases) {
            string s=helper(test_case);
            cout<<(s=="yes"?"YES\n":"NO\n");
        }
    }
};

int main() {
    Solution obj;
    int t;
    cin>>t;
    vector<string> test_cases(t);
    for(string& test_case:test_cases) cin>>test_case;
    obj.solve(test_cases);
    return 0;
}