#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int n,k; cin>>n>>k;
   int a[n];
   f(i,n) cin>>a[i];
   sort(a,a+n);
   int mn = a[k-1];
   int mx = a[n-k+1];
   cout<<mn<<" "<<mx<<"\n";
}
return 0;
}