# User function Template for python3

class Solution:
    def findMinDiff(self, arr, M):
        # n = number of packets
        n = len(arr)

        
        if M == 0 or n == 0:
            return 0


        if n < M:
            return -1   

        
        arr.sort()
 
    
        min_diff = float("inf")

    
        for i in range(n - M + 1):
            diff = arr[i + M - 1] - arr[i]
            if diff < min_diff:
                min_diff = diff

        return min_diff



// Commit for 2024-11-23

// Commit for 2025-01-09
