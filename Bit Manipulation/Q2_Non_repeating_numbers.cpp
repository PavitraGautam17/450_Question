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
   int xr = 0;
   f(i,n){
     xr ^= a[i];
   }
   int mesh = xr & (~(xr-1));
   int x=0, y=0;
   f(i,n){
    if(a[i] & mesh){
       x ^= a[i];
    }
    else{
        y ^= a[i];
    }
   }
   cout<<min(x,y)<<" "<<max(x,y)<<"\n";
}
return 0;
}