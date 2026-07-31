class Solution {
public:
  bool isValid(std::string s) {
    std::stack<char> pila;
    std::unordered_map<char, char> map = {{'{', '}'}, {'[', ']'}, {'(', ')'},
                                          {'}', '{'}, {']', '['}, {')', '('}};
    for (char c : s) {
      if (c == '{' || c == '[' || c == '(') {
        pila.push(c);
      } else {
        if (pila.empty() || !(pila.top() == map[c])) {
          return false;
        } else {
          pila.pop();
        }
      }
    }
    
    return pila.empty();
  }
};
