class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
      
      if(s.length() != t.length()){
        return false;
      }
      int count[26] = {0};

      for(int i = 0; i<s.length(); i++){
        count[s[i]-int('a')] ++;
        count[t[i]-int('a')] --;
      }

      for(auto v:count){
        if(v != 0){
            return false;
        }
      }

      return true;
    }
};