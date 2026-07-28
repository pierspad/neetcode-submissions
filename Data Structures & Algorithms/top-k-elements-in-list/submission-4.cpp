#include <algorithm>
#include <print>
#include <ranges>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    std::unordered_map<int, int> map;
    for (auto num : nums) {
      map[num]++;
    }

    std::vector<std::pair<int, int>> temp;
    for (auto [num, count] : map) {
      temp.push_back({count, num});
    }
    std::ranges::sort(temp, std::greater{});

    std::vector<int> sol;

    for (auto &&[count, num] : temp | std::views::take(k)) {
      sol.push_back(num);
    }

    return sol;
  }
};
