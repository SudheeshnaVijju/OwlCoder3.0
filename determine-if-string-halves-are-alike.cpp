class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size(),su=0,c=0;
        unordered_map<char,pair<int,int>>mp;
        for(int i=0;i<n/2;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                c++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                su++;
            }
        }
        // for(auto it:mp){
        //     if(it.second.first==it.second.second) continue;
        //     else return false;
        // }
        // return true;
        if(su==c) return true;
        return false;
    }
};
