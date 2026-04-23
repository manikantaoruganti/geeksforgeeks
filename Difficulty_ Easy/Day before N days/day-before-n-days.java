class Solution {
    public static int nthDay(int d, int n) {
        // We first find the remainder of n when divided by 7.
        // This gives us the effective number of days to go back.
        int effective_n = n % 7;

        // Subtract the effective number of days from d.
        int result = d - effective_n;

        // If the result is negative, we add 7 to wrap around the week.
    
        if (result < 0) {
            result += 7;
        }

        return result;
    }
}


// Commit for 2024-11-26
