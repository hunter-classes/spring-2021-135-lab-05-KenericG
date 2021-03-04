#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Is Divisible") {
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(6, 3) == true);
    CHECK(isDivisibleBy(4, 4) == true);
}

TEST_CASE("Is Not Divisible") {
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(7, 3) == false);
    CHECK(isDivisibleBy(100, 21) == false);
}

TEST_CASE("Is Prime") {
    CHECK(isPrime(23) == true);
    CHECK(isPrime(47) == true);
    CHECK(isPrime(3) == true);
}

TEST_CASE("Is Not Prime") {
    CHECK(isPrime(1) == false);
    CHECK(isPrime(30) == false);
    CHECK(isPrime(55) == false);
}

TEST_CASE("Next Prime") {
    CHECK(nextPrime(2) == 3);
    CHECK(nextPrime(23) == 29);
    CHECK(nextPrime(45) == 47);
}

TEST_CASE("Count Primes") {
    CHECK(countPrimes(1,10) == 4);
    CHECK(countPrimes(1,11) == 5);
    CHECK(countPrimes(6,20) == 5);
}

TEST_CASE("Is Twin Prime") {
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(13) == true);
    CHECK(isTwinPrime(11) == true);
}

TEST_CASE("Is Not Twin Prime") {
    CHECK(isTwinPrime(100) == false);
    CHECK(isTwinPrime(23) == false);
    CHECK(isTwinPrime(8) == false);
}

TEST_CASE("Next Twin Prime") {
    CHECK(nextTwinPrime(20) == 29);
    CHECK(nextTwinPrime(13) == 17);
    CHECK(nextTwinPrime(10) == 11);
}

TEST_CASE("Largest Twin Prime") {
    CHECK(largestTwinPrime(5,18) == 17);
    CHECK(largestTwinPrime(1,31) == 31);
    CHECK(largestTwinPrime(14,16) == -1);
}
