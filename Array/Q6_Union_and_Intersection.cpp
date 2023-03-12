#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;

void punion(int a[], int b[], int n, int m){
  int i=0, j=0;
    while(i<n && j<m){
      if(a[i]<b[j]){
        cout<<a[i++]<<" "; 
        } 
      else if(a[i]>b[j]) {
        cout<<b[j++]<<" ";}
      else {
        cout<<b[j++]<<" "; 
        i++;
        }
        if(a[i]==a[i-1]) i++;
        if(b[j]==b[j-1]) j++;
    } // 
    while(i<n){
      cout<<a[i++]<<" ";
    }
    while(j<m){
      cout<<b[j++]<<" ";
    }
}

void pintersection(int a[], int b[], int n, int m){
  int i=0, j=0;
  while(i<n && j<m){
    if(a[i]<b[j]){
      i++;
    }
    else if(a[i]>b[j]) j++;
    else{
      cout<<a[i++]<<" ";
      j++;
    }
    if(a[i]==a[i-1]) i++;
    if(b[j]==b[j-1]) j++;
  }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int n,m; cin>>n>>m;
   int a[n];
  f(i,n) cin>>a[i];
  int b[m];
  f(i,m) cin>>b[i];
  punion(a,b,n,m);
  cout<<endl;
  pintersection(a,b,n,m);
  }

return 0;
}