# User function Template for python3

class Solution:
    def findMinDiff(self, arr, M):
        # n = number of packets
        n = len(arr)

        # if there are no students or no packets
        if M == 0 or n == 0:
            return 0

        # If students are more than packets
        if n < M:
            return -1   # not possible

        # Sort the packets
        arr.sort()

        # Initialize result as a large value
        min_diff = float("inf")

        # Find the subarray of size M with minimum difference
        for i in range(n - M + 1):
            diff = arr[i + M - 1] - arr[i]
            if diff < min_diff:
                min_diff = diff

        return min_diff


