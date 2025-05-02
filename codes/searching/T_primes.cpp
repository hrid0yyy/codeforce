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

int main() {
    ios_base::sync_with_stdio(false); // Optimize I/O
    cin.tie(0);

    const int MAX_N = 1000000; // Upper limit for prime generation
    sll s;                     // Set to store squares of primes

    // Generate primes using Sieve
    vector<bool> isPrime = sieve(MAX_N);

    // Store squares of primes in the set
    for (int i = 2; i <= MAX_N; i++) {
        if (isPrime[i]) {
            s.insert(1LL * i * i); // Use 1LL to prevent overflow
        }
    }

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        long long x;
        cin >> x; // Read query number
        // Check if x is a square of a prime
        if (s.find(x) != s.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}