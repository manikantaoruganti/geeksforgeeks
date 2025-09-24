class Geeks {
    // Function to do operations with different data types
    static void dataTypes(int a, float b, double c, long l, byte d) {
        double p = c / b;     // c divided by b
        double q = b / a;     // b divided by a
        double r = c / a;     // c divided by a
        double m = r + l;     // r plus l
        int s = a / d;        // a divided by d
        
        // Printing all the results
        System.out.println(p + " " + q + " " + r + " " + m + " " + s);
    }
}
