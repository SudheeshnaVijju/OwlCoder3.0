#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int test,l,r;
    cin>>l>>r;
    
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int t=a[i],p;
        bool b;
        v.push_back({});
        p=31;
        while(p!=-1){
            if(v.size()==1){
            if(t&(1<<p)) v[i].push_back(1);
            else v[i].push_back(0);
            }
            else{
                if(t&(1<<p)) b=true;
                else b=false;
                if(b) v[i].push_back(v[i-1][31-p]+1);
                else v[i].push_back(v[i-1][31-p]);
            }
            p--;
        }
    }
    
    for(int i=0;i<v.size();i++){
        for(int j=0;j<32;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    int s=0;
    for(int i=31;i>0;i--){
        if(l!=0) l-=1;
        if(v[r][i]-v[l][i]==r) s+=1<<(31-i);
    }
    cout<<s;
    return 0;
}