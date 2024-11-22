class Solution {
    static boolean prime(int n) {
        if (n <= 1) return false; // 0 and 1 are not prime
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false; // Found a divisor, not prime
        }
        return true; // No divisors found, prime
    }
}



// Commit for 2024-11-22
