class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::vector<int> stack;
        stack.reserve(tokens.size());

        for (const std::string& token : tokens) {
          if (std::isdigit(static_cast<unsigned char>(token.back()))) {
            int val = 0;
            std::from_chars(token.data(), token.data() + token.size(), val);
            stack.push_back(val);
          }
          else{
            int rhs = stack.back(); 
            stack.pop_back();
            int lhs = stack.back(); 
            stack.pop_back(); 

            switch (token[0]) {
              case '+': stack.push_back(lhs + rhs); break;
              case '-': stack.push_back(lhs - rhs); break;
              case '*': stack.push_back(lhs * rhs); break;
              case '/': stack.push_back(lhs / rhs); break;
            }
          }
        }

        return stack.back();
    }
};