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
   //using Brian Kernighan’s Algorithm
   int n; cin>>n;
   int count =0;
   while(n){
    n &= (n-1);
    count++;
   }
   cout<<count<<"\n";
}
return 0;
}