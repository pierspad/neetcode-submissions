class Solution {
public:
  bool isValid(std::string s) {
    if (s.size() % 2 != 0) [[unlikely]] {
      return false;
    }

    std::vector<char> stack;
    stack.reserve(s.size() / 2);

    for (const char c : s) {
      switch (c) {
      case '(':
        stack.push_back(')');
        break;
      case '[':
        stack.push_back(']');
        break;
      case '{':
        stack.push_back('}');
        break;
      default:
        if (stack.empty() || stack.back() != c) {
          return false;
        }
        stack.pop_back();
        break;
      }
    }

    return stack.empty();
  }
};