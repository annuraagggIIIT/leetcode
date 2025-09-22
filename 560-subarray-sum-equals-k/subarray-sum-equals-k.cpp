class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int count =0; 
        int n =arr.size();
        vector<int>p(n,0);


        p[0]=arr[0];
        for(int i =1; i<n ;i++){
            p[i]=p[i-1]+arr[i];
        }

        unordered_map<int,int>m;
        for (int j = 0; j<n ; j++)
        {
            if(p[j]==k){
                count++;
            }
            int val = p[j]-k;
            if(m.find(val)!=m.end()){
                count+=m[val];
            }
            if(m.find(p[j])==m.end()){
                m[p[j]]=0;
            }
            m[p[j]]++;
        }
        return count;
    }
};