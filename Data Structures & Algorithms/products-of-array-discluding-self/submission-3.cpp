
#include <print>
#include <vector>

class Solution {
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums) {
    int size = nums.size();
    std::vector<int> sol(size);
    std::vector<int> prefix(size);
    std::vector<int> suffix(size);

    int prod = 1;
    for (int i = 0; i < size; i++) {
      prod *= nums[i];
      prefix[i] = prod;
    }
    //std::println("Prefix: {}", prefix);

    prod = 1;
    for (int i = size - 1; i >= 0; i--) {
      prod *= nums[i];
      suffix[i] = prod;
    }
    //std::println("Suffix: {}", suffix);

    int left = 0, right = 0;

    for (int i = 0; i < size; i++) {
      int left = (i > 0) ? prefix[i - 1] : 1;
      int right = (i < size - 1) ? suffix[i + 1] : 1;
      sol[i] = left * right;
    }

    return sol;
  }
};
