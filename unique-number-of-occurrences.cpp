class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp,mp1;
        int n=arr.size();

        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            
        }
        for(auto it:mp){
        mp1[it.second]++;
        if(mp1[it.second]>1) return 0;
        }
        return 1;
    }
};
