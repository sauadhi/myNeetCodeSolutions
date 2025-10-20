/*
Accepted
10/20/2025 03:19

Language: Cpp (under 20)

Memory: 1.4 MB

Runtime: 0.002 seconds
*/

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> myset;

        for(int num : nums){
            if(myset.count(num) == 1){
                return true;
            }
            myset.insert(num);
        }
        return false;

    }
};
