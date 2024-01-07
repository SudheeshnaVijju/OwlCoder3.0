class Solution{
    public:
    vector<int> findAnswer(int n, vector<int> &a)
    {
        //Write Code Here
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            if(a[i]>0){
                v[i]=1;
            }
            else{
                long long s=0;
                for(int j=i;j<n;j++){
                    s+=a[j];
                    if(s>0) {
                        v[i]=j-i+1;
                        break;
                    }
                }
                //if(v.size()!=i+1) v.emplace_
            }
        }
        return v;
    }
};
