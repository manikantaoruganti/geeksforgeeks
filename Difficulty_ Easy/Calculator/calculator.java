class Solution {
    public static void utility(int a, int b, int opr) {
        if (opr == 1) {
            System.out.print(a + b);
        } else if (opr == 2) {
            System.out.print(a - b);
        } else if (opr == 3) {
            System.out.print(a * b);
        } else {
            System.out.print("Invalid Input");
        }
    }
}

