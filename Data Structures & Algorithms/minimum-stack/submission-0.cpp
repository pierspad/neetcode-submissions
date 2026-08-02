class MinStack {
public:
  std::vector<int> stack_;
  std::unordered_map<int,int> map;
  int size = 0;

  MinStack() {}

  void push(int val) { 
    stack_.push_back(val); 
    size++;

    if(size > 1){
      map[size] = std::min(map[size-1], val);
    }
    else{
      map[1] = val;
    }
  }

  void pop() { 
    stack_.pop_back(); 
    size--;
  }

  int top() { 
    return stack_.back(); 
  }

  int getMin() {
    return map[size];
  }
};

