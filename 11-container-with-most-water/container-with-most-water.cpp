class Solution {
public:
   int maxArea(vector<int>& height) {
    int maxx = INT_MIN;
    int n = height.size();
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int pro = min(height[left], height[right]) * (right - left);
        maxx = max(maxx, pro);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxx;
}

};