class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        std::unordered_set<int> num_set(nums.begin(), nums.end());
        int max_streak = 0;

        for (int num : num_set) {

            if (!num_set.contains(num - 1)) {
                int current_num = num;
                int current_streak = 1;

                while (num_set.contains(current_num + 1)) {
                    current_num++;
                    current_streak++;
                }

                max_streak = std::max(max_streak, current_streak);
            }
        }

        return max_streak;
    }
};