class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int cur = 0, maxx = INT_MIN;

        for (int i : nums) {
            cur += i;
            maxx = max(cur, maxx);
            (cur < 0) && (cur = 0);
        }
        return maxx;
    }
};