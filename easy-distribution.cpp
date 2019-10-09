#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
const int MOD =1000000007;
ull fact[100001];
//Precomputing factorial of all numbers under modulo
void factorial()
{   fact[0]=1;
    for(int i=1;i<100001;i++)
    {
        fact[i] = (fact[i-1]*i)%MOD;
    }
}
//Fast Power Function
ull POWER(ull x,ull y)
{
    if(y==0)return 1;
    if(y%2==0)
    {
        x = POWER((x*x)%MOD,y/2);

    }
    else{
        x = x*POWER(x,y-1)%MOD;
    }
    return x;
}
//Function to calculate ncr
ull ncr(int n,int r)
{
    ull ans = fact[n]%MOD;
    ans = ((ans*(POWER(fact[r],MOD-2)%MOD)%MOD)*(POWER(fact[n-r],MOD-2)%MOD))%MOD;
    return ans;
}
int main()
{   // (n!%m)*((r!)^m-2)%m)*(((n-r)!)^m-2)%m)%m this is Fermat Little Theorem
    factorial();
    int n,m; cin>>n>>m;
    ull ans=0;
    ull k = n/m;
    for(ull i=1;i<=k;i++){
    ull p=1;
    int temp =n+i;
    for(int j=0;j<m;j++){
        temp-=i;
        p*=ncr(temp,i);
        p%=MOD;
        //cout<<p<<endl;
    }
    ans+=p;
    ans%=MOD;
    }
    cout<<ans;


}

