//User function template for C++

class Solution {
public:
    vector<int> factorial(int n){
        // code here
        vector<int> v;
        v.push_back(1);
        
        long long int p,d,c=0,i,j;
        for(i=1;i<n+1;i++){
            c=0;
            for(j=0;j<v.size();j++){
                //cout<<v[j]<<" ";
                p=(v[j]*i)+c;
                d=p%10;
                c=p/10;
                v[j]=d;
            }
            // cout<<"\n";
            while(c){
                v.push_back(c%10);
                c/=10;
            }
            //for(int )
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
