#include <iostream>

/*
function fibonacci(n)
    if n = 0 or n = 1
        return n
    a = 0
    b = 1
    for i = 2 to n
        c = a + b
        a = b
        b = c
    return b
*/

class Fibonacci {
  public:
    size_t even_sum(size_t limit) {
      if (limit == 0 || limit == 1)
        return limit;

      size_t sum = 0;
      size_t a = 0;
      size_t b = 1;
      size_t c = 0;
      for (size_t i = 2; c < limit; i++) {
        c = a + b;
        if (!(c % 2))
          sum += c;
        a = b;
        b = c;
      }
      return sum;
    }
};

int main(int ac, char **av) {
  if (ac != 2)
    return 1;

  Fibonacci evenSum;
  size_t sum = evenSum.even_sum(std::stoul(av[1]));
  std::cout << "The sum of even for " << av[1] << " is " << sum << std::endl;
  return 0;
}
