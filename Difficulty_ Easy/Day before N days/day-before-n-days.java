class Solution {
    public static int nthDay(int d, int n) {
        // We first find the remainder of n when divided by 7.
        // This gives us the effective number of days to go back.
        int effective_n = n % 7;

        // Subtract the effective number of days from d.
        int result = d - effective_n;

        // If the result is negative, we add 7 to wrap around the week.
        // For example, if d=2 and effective_n=4, result is -2. Adding 7 gives 5.
        // We use a check to ensure the result is in the 0-6 range.
        if (result < 0) {
            result += 7;
        }

        return result;
    }
}

