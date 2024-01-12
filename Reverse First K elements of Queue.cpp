// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        vector<int> v;
        while(!q.empty() && k){
            v.emplace_back(q.front());
            k--;
            q.pop();
        }
        reverse(v.begin(),v.end());
        while(!q.empty()){
            v.emplace_back(q.front());
            q.pop();
        }
        for(auto it:v){
            q.push(it);
        }
        return q;
    }
};
