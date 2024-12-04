// Complete the function
// Take input for a and s
import java.util.*;

class Geeks {
    static void getInput() {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // Taking the number of testcases
        while (t-- > 0) {
            int a = sc.nextInt();  // reading integer
            sc.nextLine();         // clearing the input buffer
            String s = sc.nextLine(); // reading full line string
            
            System.out.println(a);
            System.out.println(s);
        }
    }
}


