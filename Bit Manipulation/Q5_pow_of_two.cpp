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
   int x; cin>>x;
   if(x==0){
    cout<<"no\n";
   }
   else if((x&(x-1))==0){
    cout<<"yes\n";
   }
   else{
    cout<<"no\n";
   }
}
return 0;
}