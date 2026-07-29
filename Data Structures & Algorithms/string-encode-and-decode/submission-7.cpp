#include <print>
#include <string>
#include <vector>

class Solution {
public:
  std::string encode(std::vector<std::string> &strs) {
    std::string sol = "";
    std::string prefix = "";
    int countstr = 0;

    for (const auto &s : strs) {
      countstr++;
      prefix += std::to_string(s.length());
      prefix += "-";
      sol += s;
    }

    if (countstr == 1 && prefix.length() == 0) {
      return {""};
    }

    std::string a = std::to_string(countstr) + "-" + prefix + sol;
    std::println("a: {}", a);
    return a;
  }

  std::vector<std::string> decode(std::string s) {
    std::vector<std::string> vecsol;

    int ttrovati = 0, sidx = 0, eidx = 0;

    eidx = s.find("-", sidx);
    std::print("string: {}", s);
    int numstring = std::stoi(s.substr(sidx, eidx));

    sidx = eidx + 1, eidx = eidx + 1;

    std::vector<int> lunghezze;

    while (ttrovati != numstring) {
      eidx = s.find("-", sidx);
      lunghezze.push_back(std::stoi(s.substr(sidx, eidx - sidx)));
      ttrovati++;
      sidx = eidx + 1;
    }

    int start = eidx + 1;
    for (auto l : lunghezze) {
      std::string a = s.substr(start, l);
      vecsol.push_back(a);
      start += l;
    }

    return vecsol;
  }
};