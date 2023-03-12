#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;

int check(int n){
    if((n&(n-1))!=0 || (n==0)){
        return -1;
    }
    int x = n | (n-1);
    x = x^n;
    int count=1;
    while(x){
        x &= (x-1);
        count++;
    }
    return count;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int n; cin>>n;
   cout<<check(n)<<"\n";
}
return 0;
}