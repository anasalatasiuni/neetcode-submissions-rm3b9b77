class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char,int> x;
        map <char,int> y;
        if (s.size()!=t.size()) return false;
        for (int i = 0 ; i < s.size();i++){
            x[s[i]]++;
            y[t[i]]++;
        }
        for (int i = 0 ; i < s.size();i++){
            if (x[s[i]]!=y[s[i]]){
                return false;
            }
        }
        return true;
    }
};
