class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code hee.
            vector<int> v;
            int n=txt.size();
            int m=pat.size();
            for(int i=0;i<n;i++){
                int c=0;
                for(int j=0;j<m;j++){
                    if(txt[i+j]==pat[j]) c++;
                    else break;
                }
                if(c==m){ 
                    v.emplace_back(i+1);
                   
                }
            }
            return v;
        }
     
};
