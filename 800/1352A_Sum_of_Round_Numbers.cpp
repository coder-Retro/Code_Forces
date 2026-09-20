#include<iostream>
using namespace std;

class Solution {
    int countNonZeroDigits(int n) {
        int nonZero=0;
        while(n) {
            if(n%10) nonZero++;
            n/=10;
        }
        return nonZero;
    }
public:
    void roundNumbers(int n) {
        int nonZero=countNonZeroDigits(n);
        cout<<nonZero<<'\n';
        int mul=1;
        while(nonZero) {
            int digit=n%10;
            if(digit) {
                cout<<(mul*digit)<<" ";
                nonZero--;
            }
            mul*=10;
            n/=10;
        }
        cout<<'\n';
    }
};

int main() {
    Solution obj;
    int test_cases;
    cin>>test_cases;
    int* nums=new int[test_cases];
    for(int i=0;i<test_cases;i++) cin>>nums[i];
    for(int i=0;i<test_cases;i++) obj.roundNumbers(nums[i]);
    delete[] nums;
    return 0;
}