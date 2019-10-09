#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int s,y,n,x; cin>>s>>y>>n>>x;
    int a[101];//arrays to store height of every day till 100
    memset(a,0,sizeof(0));
    a[0]=s;//initially height at 0th day is s
    
    //when every day is rest day
    if(n==1){cout<<"FAIL";return 0;}
    //when growth is faster than cutting 
    if(y>x){cout<<"FAIL";return 0;}
    for(int i=1;i<=100;i++){
        //if rest day only growing
        if(i%n==0){a[i]=a[i-1]+y;continue;}
        else a[i] = a[i-1]-x+y;//cutting by x and growing by y
        if(a[i]<=0){cout<<"PASS"; return 0;}//when height already reached 0
    }
    cout<<"FAIL";

}
