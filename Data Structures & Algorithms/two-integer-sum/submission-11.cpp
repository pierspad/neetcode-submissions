class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target){

    std::unordered_map<int,int> map;
    int diff = 0;
    
    map.reserve(nums.size());

    for(int i = 0; i < nums.size(); i++){
      diff = target-nums[i];
      auto it = map.find(diff);
      if(it != map.end()){
        return {it->second, i};
      }
      map[nums[i]] = i;
    }

    return {};
  }
};
