class Solution {
    public String average(int arr[]) {
        double sum = 0;
        for (int num : arr) {
            sum += num;
        }
        
        double avg = sum / arr.length;
        
        // Format to 2 decimal places and return as String
        return String.format("%.2f", avg);
    }
}


