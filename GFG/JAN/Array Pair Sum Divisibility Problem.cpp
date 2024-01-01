class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if (nums.size() % 2)
            return false; 
        unordered_map<int, int> mp; 
        for(auto &x: nums){
            if (mp[(k - x % k) % k] > 0){
                mp[(k - x % k) % k]--; 
            }
            else{
                mp[x % k]++; 
            }
        }
        for(auto &x: mp){
            if (x.second > 0)
                return false; 
        }
        return true; 
    }
};