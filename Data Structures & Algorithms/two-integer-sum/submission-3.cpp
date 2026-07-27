class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> sol;
    
    std::unordered_map<int,int> index_map;

    for (size_t i = 0; i < nums.size(); i++) {
      index_map[nums[i]] = i; 
    }

    for (size_t i = 0; i < nums.size(); i++) {
      if(index_map.count(target-nums[i]) > 0 && index_map[target-nums[i]] != i){
        sol.push_back(i);
        sol.push_back(index_map[target-nums[i]]);
        return sol;
      }
    }

    return sol;
  }
};
