//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int> mp;
	    int s=0,ma=0,mod;
	    for(int i=0;i<n;i++){
	        s+=arr[i];
	        mod=s%k;
	        if(mod==0) ma=max(ma,i+1);
	        if(mod<0) mod+=k; 
	        if(mp.find(mod)!=mp.end()){
	            ma=max(ma,i-mp[mod]);
	        }
	        else mp[mod]=i;
	    }
	    return ma;
	    
	}
};
