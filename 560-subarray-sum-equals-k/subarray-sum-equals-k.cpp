#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
       int count =0 ; 
       int n =arr.size();
       vector<int> v(n, 0);
       v[0]=arr[0];
       for(int i =1; i<n ;i++){
        v[i]=v[i-1] +arr[i];
       }
       unordered_map<int,int>m;
       for(int j=0; j<n;j++)
       {
        if(v[j]==k){
            count ++;

        }
        int val = v[j] - k ; 
        if(m.find(val)!=m.end()){
            count+=m[val];
        }
        if(m.find(v[j])==m.end()){
            m[v[j]]=0;
        }
        m[v[j]]++;
       }
       return count;
    }
};