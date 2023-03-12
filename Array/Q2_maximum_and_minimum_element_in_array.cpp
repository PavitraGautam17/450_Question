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
   int current_max = a[0];
   int current_min = a[0];
   f(i,n){
    if(a[i]>current_max){
        current_max = a[i];
    }
    if(a[i]<current_min){
        current_min = a[i];
    }
   }
   cout<<current_max<<" "<<current_min<<endl;
}
return 0;
}