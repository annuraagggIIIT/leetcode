class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int>pro(n);
        vector<int>pl(n);
        vector<int>pr(n);
        pl[0]=1;
        pr[n-1] = 1;
        for(int i = 1;i<n;i++){
            pl[i]=pl[i-1]*nums[i-1];
             
        }
        for(int i=n-2 ; i>=0;i--){
            pr[i]=pr[i+1]*nums[i+1];
        }
        for(int i = 0 ; i<n;i++){
            pro[i]=pl[i]*pr[i];
        }
        return pro;
    } 
};