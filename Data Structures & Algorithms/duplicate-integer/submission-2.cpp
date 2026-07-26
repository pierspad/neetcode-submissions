class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
      if (nums.size()==0) {
        return false;        
      }
      for(int i = 0; i<nums.size()-1; i++){
        for(int j = i+1; j<nums.size(); j++){
          if(nums[i]==nums[j]){
            return true;
          }
        }
      }
      return false;
    }
};
