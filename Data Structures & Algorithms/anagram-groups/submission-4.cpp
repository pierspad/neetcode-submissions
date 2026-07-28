class Solution {
public:
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {

    std::vector<std::vector<std::string>> sol;

    std::unordered_map<std::string, std::vector<std::string>> map;
    std::string aux = "";
    for (auto s : strs) {
      aux = s;
      std::ranges::sort(aux);
      map[aux].push_back(s);
    }

    for (auto it = map.begin(); it != map.end(); it++) {
      sol.push_back(it->second);
    }

    return sol;
  }
};