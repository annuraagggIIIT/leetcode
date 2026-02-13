class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size();
        for(int i = 0 ;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int m = s.size();
        if(n>m){
            return true;
        }
        return false;
    }
};