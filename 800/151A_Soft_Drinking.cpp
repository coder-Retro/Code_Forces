#include<iostream>
using namespace std;

int solve(int n,int k,int l,int c,int d,int p,int nl,int np) {
    float ml=float(k)*l;
    float netDrinks=float(ml)/nl;
    float slices=float(c)*d;
    float salt=float(p)/np;
    return min(min(netDrinks,slices),salt)/n;
}

int main() {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<solve(n,k,l,c,d,p,nl,np);
    return 0;
}