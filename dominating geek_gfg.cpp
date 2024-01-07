class Solution{
    public:
    int a=0,b=0,mi=INT_MAX;
    // int fun(vector<int> &v,int s,int n,int i,int t){
    //     if(i==n-1) return 0;
    //     if(s+v[n-1]>t) return 0;
    //     cout<<i<<" ";
    //     a=1+fun(v,s+v[i],n,i+1,t);
    //     b=0+fun(v,s,n,i+1,t);
    //     //cout<<mi;
    //     return min(a,b);
    // }
    int minOPs(int n, vector<int> &a)
    {
        //Write Code Here
        unordered_map<int,int> mp;
        vector<int> v;
        for(auto it:a) mp[it]++;
        for(auto it:mp){
            v.emplace_back(it.second);
            //cout<<it.first<<" "<<it.second<<"\n";
            if(it.second>n/2) return 0;
        }
        int q=v.size();
        sort(v.begin(),v.end());
        int s=0,i=0;
        //cout<<v[q-2]<<" ";
        //return fun(v,s,q,i,n/2);
        for(int i=q-2;i>-1;i--){
            if((s+v[q-1])>n/2){
                return q-i-2;
            }
            s+=v[i];
        }
        if((s+v[q-1])>n/2){
                return q-i-1;
        }
    }
};
