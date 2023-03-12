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
   int n; cin>>n;
   int a[n];
   f(i,n) cin>>a[i];
   int k=0, j=n-1;
   while(k<j){
    swap(a[k],a[j]);
    k++, j--;
   }
   f(i,n) cout<<a[i]<<" ";
   cout<<endl;
}
return 0;
}