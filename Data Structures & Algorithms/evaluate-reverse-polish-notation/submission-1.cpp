class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::vector<int> stack;

        for (const std::string& token : tokens) {
          if (token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')) {
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
          } else {
            stack.push_back(std::stoi(token));
          }
        }

        return stack.back();
    }
};