class Solution {
    public String average(int arr[]) {
        double sum = 0;
        for (int num : arr) {
            sum += num;
        }
        
        double avg = sum / arr.length;
        
        
        return String.format("%.2f", avg);
    }
}

