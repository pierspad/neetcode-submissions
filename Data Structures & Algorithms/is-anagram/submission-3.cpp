class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
      std::unordered_map<char, int> map1;

      map1.reserve(s.length());

      if(s.length() != t.length()){
        return false;
      }

      for (std::size_t i = 0; i < s.length(); i++) {
        map1[s[i]] += 1;
      }

      for (std::size_t i = 0; i < t.length(); i++) {
        if((map1[t[i]] -=1) < 0){
          return false;
        }
      }

      return true;
    }
};
