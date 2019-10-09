#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int s,y,n,x; cin>>s>>y>>n>>x;
    int a[101];
    memset(a,0,sizeof(0));
    a[0]=s;

    if(n==1){cout<<"FAIL";return 0;}
    if(y>x){cout<<"FAIL";return 0;}
    for(int i=1;i<=100;i++){
        if(i%n==0){a[i]=a[i-1]+y;continue;}
        else a[i] = a[i-1]-x+y;
        if(a[i]<=0){cout<<"PASS"; return 0;}
    }
    cout<<"FAIL";

}
