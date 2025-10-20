/*
Accepted
10/20/2025 03:47

Language: Cpp

Memory: 1.5 MB

Runtime: 0.007 seconds
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for (int i = 0; i < s.length(); i++) {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        return sMap == tMap;
    }
};
