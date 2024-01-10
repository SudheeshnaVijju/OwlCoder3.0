#include<bits/stdc++.h>
using namespace std;
int binary_exponention(int a,int b){
    int ans=1;
    while(b){
        if(b&1){
            ans*=a;
            b-=1;
        }
        else{
            b/=2;
            a=a*a;
        }
    }
    return ans;
}
int m=1e9+7;
int inverse(int b){
    return binary_exponention(b,m-2);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<binary_exponention(a,b)<<" ";
    cout<<inverse(a);
}
