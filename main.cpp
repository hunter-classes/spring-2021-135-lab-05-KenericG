#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << std::endl << "Check Divisibility: (1 == true, 0 == false)" << std::endl;
  std::cout << "100 and 25: " << isDivisibleBy(100, 25) << std::endl;
  std::cout << "35 and 7: " << isDivisibleBy(35, 17) << std::endl;
  std::cout << std::endl << "Check If Prime: (1 == true, 0 == false)" << std::endl;
  std::cout << "1: " << isPrime(1) << std::endl;
  std::cout << "23: " << isPrime(23) << std::endl;
  std::cout << "30: " << isPrime(30) << std::endl;
  std::cout << "47: " << isPrime(47) << std::endl;
  std::cout << "55: " << isPrime(55) << std::endl;
  std::cout << std::endl << "Next Prime:" << std::endl;
  std::cout << "23: " << nextPrime(23) << std::endl;
  std::cout << "45: " << nextPrime(45) << std::endl;
  std::cout << std::endl << "Count Primes In Range:" << std::endl;
  std::cout <<  "1 - 10: " << countPrimes(1,10) << std::endl;
  std::cout << std::endl << "Check If Twin Prime: (1 == true, 0 == false)" << std::endl;
  std::cout << "17: " << isTwinPrime(17) << std::endl;
  std::cout << "13: " << isTwinPrime(13) << std::endl;
  std::cout << "100: " << isTwinPrime(100) << std::endl;
  std::cout << "23: " << isTwinPrime(23) << std::endl;
  std::cout << std::endl << "Next Twin Prime:" << std::endl;
  std::cout << "20: " << nextTwinPrime(20) << std::endl;
  std::cout << "13: " << nextTwinPrime(13) << std::endl;
  std::cout << std::endl << "Largest Twin Prime In Range: (-1 = None In Range)" << std::endl;
  std::cout <<  "5 - 18: " << largestTwinPrime(5,18) << std::endl;
  std::cout <<  "1 - 31: " << largestTwinPrime(1,31) << std::endl;
  std::cout <<  "14 - 16: " << largestTwinPrime(14,16) << std::endl;
  return 0;
}
