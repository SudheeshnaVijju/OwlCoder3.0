class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int c=0,i=0,j=0;
        int n1=g.size(),n2=s.size();
        while(i<n1 && j<n2){
            if(g[i]<=s[j]) {
                c++;
                i++;
                j++;
            }
            else{
                j++;
            }
            
        }
        return c;
    }
};
