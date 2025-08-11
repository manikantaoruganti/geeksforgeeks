import java.util.*;

class Solution {
    public static ArrayList<Integer> commonElements(int a[], int b[]) {
        ArrayList<Integer> result = new ArrayList<>();
        
        // Sort both arrays
        Arrays.sort(a);
        Arrays.sort(b);
        
        int i = 0, j = 0;
        
        // Two-pointer approach to find common elements
        while (i < a.length && j < b.length) {
            if (a[i] == b[j]) {
                result.add(a[i]);
                i++;
                j++;
            } else if (a[i] < b[j]) {
                i++;
            } else {
                j++;
            }
        }
        
        return result;
    }
}
