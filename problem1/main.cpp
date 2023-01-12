#include <iostream>

class Multiple_3_and_5{
  public:
    size_t three_five_multiple(size_t limit) {
      size_t sum = 0;
      for (size_t i = 1; i < limit; i++) {
        if (!(i % 3) || !(i % 5))
          sum += i;
      }
      return sum;
    }

    size_t arithmetic_progression(size_t limit, size_t diff) {
      return (diff * (limit / diff) * (1 + (limit / diff)) / 2);
    }
};

int main() {
  Multiple_3_and_5 sum;
  std::cout << "Sum using AP: " << (sum.arithmetic_progression(999, 3) + sum.arithmetic_progression(999, 5) - sum.arithmetic_progression(999, 15)) << std::endl;
  return 0;
}
