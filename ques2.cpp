#include <iostream>
#include <vector>
#include <cmath>
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}
std::vector<int> findPrimes(int limit) {
    std::vector<int> primes;
    for (int num = 2; num <= limit; ++num) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }
    return primes;
}
int main() {
    int limit;
    std::cout << "Enter an integer: ";
    std::cin >> limit;

    std::vector<int> primes = findPrimes(limit);

    std::cout << "Prime numbers up to " << limit << " are:" << std::endl;
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;
    return 0;
}

