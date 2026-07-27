class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> sol;
    for (std::size_t i = 0; i < nums.size()-1; i++) {
      for (std::size_t j = i+1; j < nums.size(); j++) {
        if (nums[i]+nums[j] == target){
          sol.push_back(i);
          sol.push_back(j);
        }
      }
    }
    return sol;
  }
};
