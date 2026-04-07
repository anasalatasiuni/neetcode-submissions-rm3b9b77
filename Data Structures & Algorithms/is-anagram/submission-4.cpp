class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char, int> freq;
        if (s.size() != t.size()) return false;
        for (char c: s) freq[c]++;
        for (char c: t) freq[c]--;

        for (auto c: freq){
            if (c.second !=0) return false;
        }
        return true;
    }
};
