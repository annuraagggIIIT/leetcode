class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> v(26, 0);
        vector<int> v1(26, 0);

            for (int i = 0; i < s.size(); i++) {
            v[s[i]-'a']++;
            v1[t[i]-'a']++;

        }
        for(int i = 0 ; i<26;i++){
            if(v[i]!=v1[i]){
                return false;
            }
        }
        return true;
    }
};