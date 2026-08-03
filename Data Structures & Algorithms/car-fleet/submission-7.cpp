class Solution {
public:
  int carFleet(int target, std::vector<int> &position,
               std::vector<int> &speed) {

    std::vector<std::pair<int, int>> vec1;

    for (int i = 0; i < position.size(); i++) {
      vec1.push_back(std::pair(position[i], speed[i]));
    }

    std::ranges::sort(vec1);

    if (vec1.size() == 1) {
      return 1;
    }

    int count = 1;
    float t1 = 0;
    float t2 = 0;
    int curstop = vec1.size() - 1;
    for (int i = vec1.size() - 2; i >= 0; i--) {
      t1 = float(target - vec1[i].first) / float(vec1[i].second);
      t2 = float(target - vec1[curstop].first) / float(vec1[curstop].second);
      if (t1 > t2) {
        count++;
        curstop = i;
      }
    }

    return count;
  }
};