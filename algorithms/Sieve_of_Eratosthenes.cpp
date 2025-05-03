#include <iostream>
#include <set>
#include <vector>

using namespace std;
using sll = set<long long>; // Type alias for set<long long>

// Function to generate primes up to n using Sieve of Eratosthenes
vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true); // Initialize all numbers as prime
    isPrime[0] = isPrime[1] = false;   // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            // Mark multiples of i starting from i*i as non-prime
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}
