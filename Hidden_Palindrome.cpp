//MS
#include<iostream>
#include<string.h>
#include<algorithm>
#define int long long int
using namespace std;
bool ispalin(string s,int i,int j){

  if(i>j)return false;
  if(s[i]==s[j]&&i==j-1)return true;
  if(s[i]==s[j])return ispalin(s,i+1,j-1)||i==j-2;
  else return ispalin(s,i+1,j)||ispalin(s,i,j-1);
}
int32_t main(){
    int t;cin>>t;
    while(t--){
       string s; cin>>s;
       cout<<ispalin(s,0,s.length()-1)<<endl;
    }
}


