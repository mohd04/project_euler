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
};

int main(int ac, char **av) {
  if (ac != 2)
    return 1;
  Multiple_3_and_5 sum;
  size_t ans = sum.three_five_multiple(std::stoul(av[1]));
  std::cout << "The sum for " << std::stoul(av[1]) << " is " << ans << std::endl;
  return 0;
}
