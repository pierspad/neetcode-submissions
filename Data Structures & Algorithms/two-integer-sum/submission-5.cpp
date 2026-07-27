class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> sol;
    
    std::unordered_map<int,int> index_map;

    for (size_t i = 0; i < nums.size(); i++) {
      index_map[nums[i]] = i; 
    }

    for (int i = 0; i < nums.size(); i++) {
      int diff = target-nums[i];
      if(index_map.count(diff) > 0 && index_map[diff] != i){
        return {i, index_map[diff]}; 
      }
    }

    return sol;
  }
};
