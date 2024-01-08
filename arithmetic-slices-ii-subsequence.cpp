class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<unordered_map<long,long long>>mps(nums.size());
        int count=0;
        for(int i=0;i<nums.size();i++){
            //mps.push_back({});
            for(int j=0;j<i;j++){
                long long d=1ll*nums[i]-1ll*nums[j];
                count+=mps[j][d];
                mps[i][d]=mps[i][d]+mps[j][d]+1; 
            }
        }
        // for(int i=0;i<nums.size();i++){
        //     for(auto it:mps[i]){
        //         cout<<it.first<<" "<<it.second<<"\n";
        //     }
        //     cout<<"\n";
        // }
        return count;
    }
};
