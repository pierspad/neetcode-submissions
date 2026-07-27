class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::vector<int> sol;

    std::unordered_map<int,int> map;
    int diff = 0;

    for(int i = 0; nums.size(); i++){
      diff = target-nums[i];
      if(map.find(diff) != map.end()){
        return {map[diff], i};
      }
      map[nums[i]] = i;
    }

    return sol;
  }
};
