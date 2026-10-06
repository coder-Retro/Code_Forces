#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

double solve(vector<int>& drinks) {
    double orange=0;
    for(int drink:drinks) orange+=drink;
    return orange/drinks.size();
}

int main() {
    int n;
    cin>>n;
    vector<int> drinks(n);
    for(int& drink:drinks) cin>>drink;
    cout<<fixed<<setprecision(12)<<solve(drinks);
    return 0;
}