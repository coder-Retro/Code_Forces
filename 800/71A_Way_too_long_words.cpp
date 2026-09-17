#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    void reduce(vector<string>& words) {
        for(string& word:words) {
            if(word.size()>10)
                word=word[0]+to_string(word.size()-2)+word.back();
        }
    }
};

int main() {
    Solution obj;
    int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;i++) cin>>words[i];
    obj.reduce(words);
    for(string word:words)
        cout<<word<<'\n';
    return 0;
}