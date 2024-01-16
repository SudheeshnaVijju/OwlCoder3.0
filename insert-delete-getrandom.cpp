class RandomizedSet {
public:
    set<int> a;
    RandomizedSet() {
        // RandomizedSet* obj = new RandomizedSet();
        //srand(time(NULL));
    }
    
    bool insert(int val) {
        if(a.find(val)!=a.end()){
            return false;
        }
        a.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(a.find(val)!=a.end()){
            a.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        if(a.empty()) return -1;
        int r=rand()%a.size();
        auto it=a.begin();
        advance(it,r);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
