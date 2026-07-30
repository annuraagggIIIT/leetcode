class Solution {
public:


    int dp(int n, vector<int> &v){
     
        if(v[n]!=-1) return v[n];
       v[n]=dp(n-2,v) +dp(n-1,v);
       return v[n];

    }
    int fib(int n) {
        vector<int>v(n+1,-1);
           if (n == 0) return 0;
        if (n == 1) return 1;
        v[0]=0;
        v[1]=1;
        dp(n,v);
        return v[n];

    }
};