class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
      std::unordered_map<char, int> map1, map2;
      if(s.length() != t.length()){
        return false;
      }

      for (std::size_t i = 0; i < s.length(); i++) {
        map1[s[i]] += 1;
        map2[t[i]] += 1;
      }

      for(auto it=map1.begin(); it != map1.end(); it++){
        if(map1[it->first] != map2[it->first]){
          return false;
        }
      }

      return true;

    }
};
