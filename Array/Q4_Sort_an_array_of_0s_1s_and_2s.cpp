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
   int n;
   cin>>n;
   int a[n];
   f(i,n) cin>>a[i];
   int c0=0, c1=0, c2=0;
   f(i,n){
      if(a[i]==0) c0++;
      else if(a[i]==1) c1++;
      else  c2++;
    }
int i=0;
while(c0--){
    a[i]=0;
    i++;
}
while(c1--){
    a[i]=1;
    i++;
}
while(c2--){
    a[i]=2;
    i++;
}
f(i,n) cout<<a[i]<<" ";
cout<<endl;
}
return 0;
}