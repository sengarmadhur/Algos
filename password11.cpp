//MS
#include<iostream>
#include<string.h>
#include<algorithm>
#define int long long int
const int mod =1000000007;
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
//LCM(x,y) = x*y/GCD(x,y)
int32_t main(){
    int t;cin>>t;
    while(t--){
        int ans=0,n;cin>>n;

        for(int x=1;x<n;x++){
            int g = gcd(x,n);
            ans = (ans + (n*x/g)%mod)%mod;
        }
        printf("%d\n",ans);
    }
}

