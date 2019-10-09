//MS
#include<iostream>
#include<string.h>
#include<algorithm>
#define int long long int
const int mod =1000000007;
using namespace std;
int prime[1000001];
int fact[1000001];
void sieve(){
    memset(prime,0,sizeof(prime));
    memset(fact,0,sizeof(fact));
    fact[0]=0,fact[1]=0;
    for(int i=2;i<=1000000;i++){
        if(prime[i]==0){
            for(int j=1;j*i<=1000000;j++){
                prime[i*j]=1;
                fact[i*j]++;
            }
        }
    }
}
int32_t main(){
    sieve();
    int t;cin>>t;
    while(t--){
       int a,b; cin>>a>>b;
       for(int i=a;i<=b;i++){
        printf("%d ",fact[i]);
       }cout<<endl;
    }
}


