//MS
#include<iostream>
#include<string.h>
#include<algorithm>
#define int long long int
using namespace std;
//checking from i'th index to j'th index only 
bool ispalin(string s,int i,int j){

  if(i>j)return false; //Base case no palindrome found
  if(s[i]==s[j]&&i==j-1)return true;//case when "xx" type palindrome found
  if(s[i]==s[j])return ispalin(s,i+1,j-1)||i==j-2;//check from i+1 to j-1 or "xyx" type palindrome found
  else return ispalin(s,i+1,j)||ispalin(s,i,j-1);//no matching
}
int32_t main(){
    int t;cin>>t;
    while(t--){
       string s; cin>>s;
       cout<<ispalin(s,0,s.length()-1)<<endl;
    }
}


