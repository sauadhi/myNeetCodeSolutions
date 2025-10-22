/*

Accepted
10/22/2025 07:25

Language: Cpp

Memory: 2.6 MB

Runtime: 0.003 seconds

*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> buckets;
        buckets.reserve(strs.size() * 2);

        for (string& s : strs) {
            int cnt[26] = {};
            for (unsigned char c : s) 
            {
                ++cnt[c - 'a'];
            }
            string key; key.reserve(26 * 2);
            for (int i = 0; i < 26; ++i) {
                key.push_back('#');
                key += to_string(cnt[i]);
            }
            buckets[key].push_back(move(s));
        }

        vector<vector<string>> out;
        out.reserve(buckets.size());
        for (auto& [_, group] : buckets) out.push_back(move(group));
        return out;
    }
};
