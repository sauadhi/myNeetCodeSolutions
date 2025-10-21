/*
  Accepted
10/21/2025 12:08

Language: Cpp

Memory: 1.1 MB

Runtime: 0.003 seconds
  */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mymap;

        for(int i = 0; i < nums.size(); i++){
            int x = target - nums[i];
            if(mymap.count(x)){
                return {mymap.at(x), i};
            }

            mymap[nums[i]] = i;
        }
        return {};
    }
};
