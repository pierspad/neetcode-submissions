class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::vector<int> sol;

    std::unordered_map<int,int> map;
    int diff = 0;

    for(int i = 0; i < nums.size(); i++){
      diff = target-nums[i];
      auto it = map.find(diff);
      if(it != map.end()){
        return {it->second, i};
      }
      map[nums[i]] = i;
    }

    return sol;
  }
};
