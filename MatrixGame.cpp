#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1)return false;
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++){
    if(n%i==0)return false;
}
return true;
}
int main()
{
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    bool flag = false;
    int num=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=0;
            for(int x=i;x<n;x++){
                for(int y=j;y<m;y++){
                    sum+=a[x][y];
                }
            }
            if(isprime(sum)){
                num++;
                cout<<i<<" "<<j<<" "<<sum<<" "<<endl;
            }
        }
    }
    if(num==0)cout<<-1;
    else cout<<num;

}

