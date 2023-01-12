#include <iostream>
#include <vector>
#include <math.h>

/*
function prime_factors(n)
    factors = []
    while n is even
        factors.append(2)
        n = n / 2
    for i = 3 to sqrt(n) + 1
        while n is divisible by i
            factors.append(i)
            n = n / i
    if n > 2
        factors.append(n)
    return factors
*/

class PrimeFactor {
  public:
    size_t largest_factor(size_t n) {
      std::vector<size_t> factors;

      while (!(n % 2)) {
        factors.push_back(2);
        n = n / 2;
      }

      for (size_t i = 3; i < sqrt(n) + 1; i++) {
        while (!(n % i)) {
          factors.push_back(i);
          n = n / 2;
        }
      }

      for (size_t i = 0; i < factors.size(); i++) {
        std::cout << "val: " << factors[i] << std::endl;
      }

      if (n > 2)
        factors.push_back(n);

      return *(factors.end() - 1);
    }
};

int main(int ac, char **av) {
  if (ac != 2)
    return 1;
  PrimeFactor factor;
  size_t largest = factor.largest_factor(std::stoul(av[1]));
  std::cout << "Largest: " << largest << std::endl;
}
