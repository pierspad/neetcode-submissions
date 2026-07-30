
#include <array>
#include <print>
#include <vector>

class Solution {
public:
  bool isVecValid(std::vector<char> &row) {
    std::array<int, 10> arr{};
    int digit = 0;
    for (char c : row) {
      if (c != '.') {
        digit = c - '0';

        arr[digit]++;
        if (arr[digit] > 1) {
          // std::println("row: {}", row);
          // std::println("arr: {}", arr);
          return false;
        }
      }
    }
    return true;
  }

  bool isValidSudoku(std::vector<std::vector<char>> &board) {

    std::vector<char> temp(9);
    int x, y;

    for (int i = 0; i < 9; i++) {
      if (!isVecValid(board[i])) {
        return false;
      }
    }

    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        temp[j] = board[j][i];
      }
      if (!isVecValid(temp)) {
        return false;
      }
    }

    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        x = (i / 3) * 3 + (j / 3);
        y = (i % 3) * 3 + (j % 3);
        temp[j] = board[x][y];
      }

      if (!isVecValid(temp)) {
        return false;
      }
    }

    return true;
  }
};