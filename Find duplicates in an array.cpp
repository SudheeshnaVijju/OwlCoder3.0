class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        unordered_map<long long,int> mp;
        vector<int> v;
        for(int it=0;it<n;it++){
            mp[arr[it]]++;
            if(mp[arr[it]]==2) v.emplace_back(arr[it]);
        }
        if(v.size()==0) return {-1};
        sort(v.begin(),v.end());
        return v;
    }
};
