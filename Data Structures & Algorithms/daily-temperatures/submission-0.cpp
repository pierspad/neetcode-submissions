class Solution {
public:
    std::vector<int> dailyTemperatures(const std::vector<int>& temperatures) {
      std::vector<int> result(temperatures.size(), 0);
      
      std::vector<int> stack;
      stack.reserve(temperatures.size());

      for (int i = 0; i < temperatures.size(); ++i) {
        while (!stack.empty() && temperatures[i] > temperatures[stack.back()]) {
          int prev_index = stack.back();
          stack.pop_back();
          result[prev_index] = i - prev_index;
        }
        stack.push_back(i);
      }

      return result;
    }
};
