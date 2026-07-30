class Solution {
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums) {
    std::vector<int> sol;

    for (int i = 0; i < nums.size(); i++) {
      sol.push_back(1);
      for (int j = 0; j < nums.size(); j++) {
        if (j != i) {
          sol[i] *= nums[j];
        }
      }
    }

    return sol;
  }
};