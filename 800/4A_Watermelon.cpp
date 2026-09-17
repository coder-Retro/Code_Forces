#include<iostream>
using namespace std;

class Solution {
public:
    bool isDividable(int weight) {
        return !(weight%2) && (weight>2);
    }
};

int main() {
    Solution obj;
    int weight;
    cin>>weight;
    cout<<(obj.isDividable(weight)?"YES":"NO");
    return 0;
}