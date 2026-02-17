class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>>m;
        for(int i= 0; i<s.size();i++){
            string k = s[i];
            sort(k.begin(),k.end());
            
            m[k].push_back(s[i]);
        }
        vector<vector<string>>ans;
        for(auto i : m){
            ans.push_back(i.second);
        }
        return ans;
    }
};