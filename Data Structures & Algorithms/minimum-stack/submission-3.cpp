#include <algorithm>
#include <print>
#include <vector>

class MinStack {
public:
  std::vector<int> stack_;
  std::vector<int> minvec;
  int size = 0;

  MinStack() {
    minvec.push_back(0);
  }

  void push(int val) {
    stack_.push_back(val);
    size++;

    if (size > 1) {
      minvec.push_back(std::min(minvec.back(),val));
    } else {
      minvec.push_back(val);
    }
  }

  void pop() {
    stack_.pop_back();
    minvec.pop_back();
    size--;
  }

  int top() { return stack_.back(); }

  int getMin() { return minvec[size]; }
};